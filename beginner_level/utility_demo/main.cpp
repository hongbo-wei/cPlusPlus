#include "utility.h"

int main() {
    printMessage("Hello from utility!");
    int result = add(5, 7);
    printMessage("The result of adding 5 and 7 is: " + std::to_string(result));
    return 0;
}
