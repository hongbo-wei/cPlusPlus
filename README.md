# C++ Compilation and Execution on macOS

## Prerequisites
- Ensure you have **Xcode Command Line Tools** installed. Run the following in terminal:
    ```bash
    xcode-select --install
    ```

## Steps to Compile and Run

1. **Compile the Code**  
    Use the `g++` compiler to compile the `.cpp` file:
    ```bash
    g++ file_name.cpp -o file_name
    ```
    or
    ```bash
    g++ -o file_name file_name.cpp
    ```
    - Replace `file_name` with the desired name for the executable file.
    - `g++` GNU C++ Compiler
    - Bond multiple programs into one executable file:
        - `cd beginner_level/utility_demo/`
        - `g++ main.cpp utility.cpp -o main`

2. **Run the Executable**  
    Execute the compiled program:
    ```bash
    ./file_name
    ```

3. **Bonus: dumb and simple quick move -> compile and run**
```
g++ file_name.cpp -o file_name && ./file_name
```
(P.S.: if a program has been compiled and has not been changed, you don't need to compile it again to run it)


## Example

1. Create a simple `main.cpp`:
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        cout << "Hello, World!" << endl;
        return 0;
    }
    ```

2. Compile:
    ```bash
    g++ -o hello main.cpp
    ```

3. Run:
    ```bash
    ./hello
    ```

## Troubleshooting
- **Command Not Found**: If `g++` isn't found, run `brew install gcc` to install the GCC compiler via Homebrew.


## Combine Multiple .cpp Files into a Single Executable
To combine multiple .cpp files into a single executable program, you'll typically use a combination of `header` files, `.cpp` files, and a `CMakeLists.txt` file to manage the build process.

- Example 0
    - ./games/maze