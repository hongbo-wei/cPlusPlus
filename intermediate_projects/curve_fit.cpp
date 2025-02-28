#include <iostream>
#include <gsl/gsl_multifit_nlin.h>

// Define the data_t struct
struct data_t {
    size_t n;       // Number of data points
    double *t;      // Array of x values (independent variable)
    double *y;      // Array of y values (dependent variable)
};

// Model function: y = a * exp(b * x)
int exp_model(const gsl_vector *x, void *data, gsl_vector *f) {
    size_t n = ((struct data_t *) data)->n;
    double *t = ((struct data_t *) data)->t;
    double *y = ((struct data_t *) data)->y;

    double a = gsl_vector_get(x, 0);
    double b = gsl_vector_get(x, 1);

    for (size_t i = 0; i < n; i++) {
        double Yi = a * exp(b * t[i]);
        gsl_vector_set(f, i, Yi - y[i]);
    }

    return GSL_SUCCESS;
}

int main() {
    const size_t n = 10;
    double t[n] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double y[n] = {1.0, 0.7, 0.5, 0.3, 0.2, 0.15, 0.1, 0.07, 0.05, 0.03};

    struct data_t data = {n, t, y};

    const size_t p = 2; // Number of parameters (a, b)
    gsl_vector *x = gsl_vector_alloc(p);
    gsl_vector_set(x, 0, 1.0); // Initial guess for a
    gsl_vector_set(x, 1, -1.0); // Initial guess for b

    gsl_multifit_function_fdf f;
    f.f = &exp_model;
    f.df = nullptr; // Use finite difference for Jacobian
    f.n = n;
    f.p = p;
    f.params = &data;

    const gsl_multifit_fdfsolver_type *T = gsl_multifit_fdfsolver_lmsder;
    gsl_multifit_fdfsolver *s = gsl_multifit_fdfsolver_alloc(T, n, p);
    gsl_multifit_fdfsolver_set(s, &f, x);

    int status;
    size_t iter = 0;
    do {
        iter++;
        status = gsl_multifit_fdfsolver_iterate(s);
        if (status) break;
        status = gsl_multifit_test_delta(s->dx, s->x, 1e-4, 1e-4);
    } while (status == GSL_CONTINUE && iter < 500);

    double a = gsl_vector_get(s->x, 0);
    double b = gsl_vector_get(s->x, 1);

    std::cout << "a = " << a << ", b = " << b << std::endl;

    gsl_multifit_fdfsolver_free(s);
    gsl_vector_free(x);

    return 0;
}