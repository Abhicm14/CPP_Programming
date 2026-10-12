# C++ Programming Workspace

A structured repository containing foundational exercises, code walkthroughs, and practice implementations in modern **C++**.

---

## 📂 Repository Structure

```plaintext
CPP_Programming/
├── Chapter2_Introduction_to_C++/  # Basic syntax, I/O streams, primitive types, sizeof, constants
├── Chapter3_Expressions/          # Arithmetic expressions, type casting, formatting, cmath
├── Chapter4_MakingDecisions/      # Conditionals (if, if-else, switch), relational & logical operators
└── .vscode/                       # Editor & compiler configurations
```

---

## 📖 Chapter Breakdown

### 🔹 Chapter 2: Introduction to C++
* Basic structure of a C++ program (`#include <iostream>`, `namespace std`)
* Output streams (`std::cout`, `std::endl`)
* Variables, identifiers, and primitive data types (`int`, `float`, `double`, `char`, `bool`)
* The `sizeof` operator and memory layout representation (`18Sizeof.cpp`)
* String classes and character literals
* Scope, constant variables (`const`), and arithmetic assignments (`26PayRoll.cpp`)
* Chapter review exercises (`1Exercise.cpp`)

### 🔹 Chapter 3: Expressions & Interactivity
* Interactive user input streams (`std::cin`)
* Mathematical expressions, operator precedence, and associativity
* Type conversions and type casting (`static_cast`)
* Formatting console output (`<iomanip>`, `setw`, `setprecision`, `fixed`)
* Standard mathematical functions (`<cmath>`, `pow`, `sqrt`, `sin`, `cos`)
* String handling with `getline`

### 🔹 Chapter 4: Making Decisions
* Relational comparison operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)
* The `if` statement and nested conditional logic
* Two-way (`if...else`) and multi-way branching (`if...else if...else`)
* Logical operators (`&&`, `||`, `!`) and short-circuit evaluation
* Menu-driven programs with `switch` and `break` statements
* Scope of block variables and defensive input validation

---

## 🛠️ How to Compile & Run

### Using GCC / G++ (MinGW on Windows or Linux):
```bash
# Compile a specific file:
g++ -std=c++17 -Wall -Wextra Chapter2_Introduction_to_C++/1Program.cpp -o program.exe

# Execute:
./program.exe
```

### Using Clang:
```bash
clang++ -std=c++17 Chapter3_Expressions/1Program.cpp -o program.exe
./program.exe
```

