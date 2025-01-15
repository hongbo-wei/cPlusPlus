// Fi
#include <iostream>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz\n";
        } else if (i % 3 == 0) {
            std::cout << "Fizz\n";
        } else if (i % 5 == 0) {
            std::cout << "Buzz\n";
        } else {
            std::cout << i << "\n";
        }
    }
}

int main() {
    int n;
    while (true) {
        int n;
        std::cout << "Enter the range for FizzBuzz (or 0 to exit): ";
        std::cin >> n;

        if (n == 0) {
            std::cout << "Exiting the FizzBuzz program. Goodbye!\n";
            break; // Exit the loop if the user enters 0
        }

        if (n < 0) {
            std::cout << "Please enter a positive number.\n";
            continue; // Restart the loop for invalid input
        }

        fizzBuzz(n);

        // Ask the user if they want to play again
        std::string choice;
        std::cout << "Do you want to play again? (yes/no): ";
        std::cin >> choice;

        if (choice == "no" || choice == "n") {
            std::cout << "Goodbye!\n";
            break; // Exit the loop if the user chooses to stop
        }
    }
    return 0;
}