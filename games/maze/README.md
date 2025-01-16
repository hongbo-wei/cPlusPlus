Here's a simple documentation to help you compile and run the **Maze Game** project using both `g++` and `CMake`.

---

# **Maze Game Compilation and Running Guide**

## **Option 1: Compile with `g++` (Manual Method)**

### **Step 1: Organize the Files**
Make sure your project is structured as follows:
```
MazeGameProject/
├── CMakeLists.txt          # CMake build configuration (optional)
├── maze.h                  # Header file for maze-related functions
├── initializeMaze.cpp      # Function to initialize the maze
├── generateMaze.cpp        # Function to generate the maze
├── displayMaze.cpp         # Function to display the maze
└── main.cpp                # Main file containing the program entry point
```

### **Step 2: Compile the Project**
To manually compile the project using `g++`, run the following command in your terminal:

```bash
g++ main.cpp initializeMaze.cpp generateMaze.cpp displayMaze.cpp -o MazeGame
```

#### **Explanation:**
- `main.cpp initializeMaze.cpp generateMaze.cpp displayMaze.cpp`: These are the source files that will be compiled.
- `-o MazeGame`: This specifies the name of the output executable, which will be `MazeGame`.

### **Step 3: Run the Executable**
After compilation, run the generated executable:

```bash
./MazeGame
```

---

## **Option 2: Compile Using CMake (Recommended for Large Projects)**

### **Step 1: Set Up CMake**
Ensure that your project structure is like this:

```
MazeGameProject/
├── CMakeLists.txt          # CMake build configuration
├── maze.h                  # Header file for maze-related functions
├── initializeMaze.cpp      # Function to initialize the maze
├── generateMaze.cpp        # Function to generate the maze
├── displayMaze.cpp         # Function to display the maze
└── main.cpp                # Main file containing the program entry point
```

### **Step 2: Create a Build Directory**
Inside your project folder, create a new directory for the build files:

```bash
mkdir build
cd build
```

### **Step 3: Run CMake**
Run the following CMake command from the `build` directory. This will generate the necessary platform-specific build files:

```bash
cmake ..
```

#### **Explanation:**
- `..`: Refers to the parent directory (where `CMakeLists.txt` is located).

### **Step 4: Build the Project**
After running `cmake ..`, you can compile the project using `make` (if you are on a system that supports Makefiles, such as Linux or macOS):

```bash
make
```

#### **Explanation:**
- This will compile all the source files and create an executable named `MazeGame` (as defined in the `CMakeLists.txt`).

### **Step 5: Run the Executable**
Once the build is complete, you can run the `MazeGame` executable:

```bash
./MazeGame
```

---

## **Additional Notes**

### **Why Use CMake?**
- **Simplifies the build process**: CMake generates platform-specific build files, so you don't need to manually specify all source files.
- **Cross-platform compatibility**: Works on Linux, macOS, Windows, and other platforms.
- **Better project structure**: Keeps the source and build files separate, making the project cleaner and more manageable.

### **Requirements**
- Ensure you have a C++ compiler (`g++`, `clang++`, etc.) and CMake installed on your system.

---

### **Conclusion**
You now have two ways to compile and run the Maze Game:
- **Manual method** with `g++` for small projects.
- **Automated build** with `CMake` for larger, more complex projects.
