# Lesson: Number Input Validation in C++

This lesson focuses on **input validation** in C++, specifically on how to ensure the user inputs a valid number. It introduces a basic method for reading user input, checking for errors, and handling invalid entries.

## Project Overview

The program prompts the user to input a number and ensures that the input is valid. If the input is incorrect (e.g., a non-numeric value), the program will repeatedly ask for a valid number until the correct input is provided.

### Key Concepts
- **Input Validation**: Ensuring that the data entered by the user meets the expected format or range.
- **Error Handling**: Using `cin.fail()` to detect input errors, and clearing the error state with `cin.clear()`.
- **Stream Manipulation**: Using `cin.ignore()` to discard incorrect input from the stream.

## How It Works

1. **Function `ReadNumber`**:
   - This function takes a string message as an argument, which is displayed to the user.
   - It reads an integer from the user and checks for invalid input (such as characters or symbols).
   - If the input is invalid, it clears the input stream using `cin.clear()` and removes any leftover characters in the stream with `cin.ignore()`.
   - The process repeats until a valid number is entered.

2. **Main Program**:
   - The program calls `ReadNumber()` with a message prompt and displays the valid input entered by the user.

### Example Input/Output
```
Please enter a number : abc
Wrong input, Please enter a valid number : 123 
123
```

In this example:
- The user first enters an invalid input (`abc`), which triggers the validation.
- The program then prompts the user again until a valid number (`123`) is entered.

## Code Breakdown

### Function: `ReadNumber()`
```cpp
int ReadNumber(string Message) {
    int Number;
    cout << Message;
    cin >> Number;
    while (cin.fail()) {
        cin.clear();  // Clear the error flag on cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore the invalid input
        cout << "Wrong input, Please enter a valid number : ";
        cin >> Number;
    }
    return Number;
}
```
* `cin.fail()` detects if the input is not a valid integer.
* `cin.clear()` resets the error state of `cin`, allowing further input.
* `cin.ignore()` skips the remaining characters in the input buffer until the next newline.

### Main Function `main()`
```cpp
int main() {
    cout << ReadNumber("Please enter a number : ");
    return 0;
}
```
* Calls the `ReadNumber` function with a custom message to prompt the user for input.
## Compilation and Execution
### Compilation:
To compile the program, use the following command:
```
g++ -o Validate_input_lesson Validate_input_lesson.cpp
```
## Execution:
After compiling, you can run the program with:
```
Validate_input_lesson
```
## Conclusion
This lesson introduces basic input validation techniques in C++ using stream manipulation. By handling invalid inputs effectively, you can ensure that your program behaves correctly even when users provide unexpected or incorrect inputs.