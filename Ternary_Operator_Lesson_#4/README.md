# Lesson 4: Ternary Operator and Short-Hand If in C++

This lesson demonstrates the usage of the **ternary operator** (short-hand if) in C++ to check if a number is positive, negative, or null using two custom functions from the `MyLib` namespace.

## Project Overview

The program uses two functions to check the value of integers and prints whether they are:
1. Positive or Negative.
2. Null, Positive, or Negative.

### Key Concepts
- **Ternary Operator**: The ternary operator is a concise way to write simple if-else conditions in a single line. The syntax is:
```cpp
condition ? true_result : false_result;
```
Modular Functions: The program encapsulates the ternary logic within functions in the `MyLib` namespace for reusability and modularity.

## Functions in MyLib

The `MyLib` namespace contains two main functions:

1. **`isPositiveOrNegative(int Number)`**:
* This function takes an integer as input and returns `"Positive"` if the number is greater than or equal to zero, and `"Negative"` otherwise.
* Ternary Logic :
```cpp
return (Number >= 0) ? "Positive" : "Negative";
```
 2. **`isNullPositiveOrNegative(int Number)`**
* This function checks if a number is null, positive, or negative. It returns "Null" for zero, "Positive" for numbers greater than zero, and "Negative" for numbers less than zero.
* Nested Ternary Logic :
```cpp
return (Number == 0) ? "Null" : (Number > 0) ? "Positive" : "Negative";
```
## How It Works
1. **First Function `isPositiveOrNegative`**:
* Checks whether a number is positive or negative using a simple ternary operator.
* Example:
```cpp
cout << "Number1 is : " << MyLib::isPositiveOrNegative(Number1) << endl;
```
2. **Second Function `isNullPositiveOrNegative`**:
* Checks whether the number is null, positive, or negative using a nested ternary operator.
* Example:
```cpp
cout << "Number1 is : " << MyLib::isNullPositiveOrNegative(Number1) << endl;
```
## Example Output
```
Using the first function to check if the number is positive or Negative
Number1 is : Negative
Number2 is : Positive

Using the second function to check if the number is Null, positive or Negative
Number1 is : Negative
Number2 is : Null
```
## Code Breakdown
1. **Main Program (`Ternary_Operator_Lesson_#4.cpp`)**
The main function initializes two integers, `Number1` and `Number2`, and uses the two functions to check if they are positive, negative, or null. The results are printed to the console.

2. **Ternary Functions (`MyLib.h`)**
The MyLib namespace contains the actual logic for the ternary operations, simplifying the main program by keeping the condition checks modular.

## Compilation and Execution
1. Compilation:
To compile the program, use the following command:
```
g++ -o Ternary_Operator_Lesson_#4 Ternary_Operator_Lesson_#4.cpp
```
2. Execution:
After compiling, you can run the program with:
```
./Ternary_Operator_Lesson_#4
```
## Conclusion
This lesson highlights the power and simplicity of the ternary operator in C++, which allows developers to write concise conditional checks. Using modular functions improves readability and reusability in more complex projects.