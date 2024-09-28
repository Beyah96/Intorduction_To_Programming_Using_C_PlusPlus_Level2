# Lesson 2: Using Breakpoints and Inspecting Memory Values

This project demonstrates the use of breakpoints in debugging to observe the behavior of a simple C++ program. The goal is to learn how to pause program execution at key points to inspect memory values and follow the intermediate steps of the computation.

## Code Description

The program performs the following operations:
1. Defines an array with 5 elements: `arr1[5] = {200, 100, 50, 25, 30}`.
2. Initializes three integer variables: `a`, `b`, and `c`.
3. Applies increments to `a` and `b`, computes their sum, and displays the results.
4. Executes a `for` loop to update `a` based on `i` and print the loop's progress.
5. Computes the sum of `a` and `b` using the function `MySum()`.
6. Displays the final result.

## Debugging Objectives

The goal is to use **breakpoints** to halt program execution at various points and inspect the state of variables, memory, and program flow.

### Key Breakpoint Locations:
1. **Before the `for` loop execution**: Inspect the initial values of `a`, `b`, and `c` after the increments.
2. **Inside the `for` loop**: Observe how `a` changes after each iteration.
3. **Before calling the `MySum()` function**: Check the values of `a` and `b` before passing them to the function.
4. **Inside the `MySum()` function**: Examine the sum of `a` and `b` using a breakpoint inside the function.

## Steps for Debugging

1. **Set Breakpoints**:
   - Use your IDE (e.g., Visual Studio, Code::Blocks, or any other) to place breakpoints at critical lines.
   - For instance, place a breakpoint before the line `c = a + b;` to inspect how `a` and `b` evolve.

2. **Run in Debug Mode**:
   - Run the program in debug mode. The program will automatically stop at the breakpoints.

3. **Inspect Variables**:
   - Use the local variables window to observe the values of variables like `a`, `b`, and `c` at each stage.

4. **Analyze Memory**:
   - Access memory view to see how variable values are stored and how memory addresses change.

## Key Features

- **`MySum()` Function**: This function takes two integers `a` and `b`, adds them together, and returns the sum. A breakpoint inside this function allows you to inspect the values passed as arguments and the returned result.
  
- **`for` Loop**: The loop helps to understand how iterations affect the variable `a`. Breakpoints inside the loop will help trace the progressive changes in `a`.

## Compilation and Execution Example

- **Compilation**:
  ```bash
  g++ -o Debugging_Lesson_2 Debugging_Lesson_#2.cpp
