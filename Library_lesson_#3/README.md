# Lesson 3: Libraries in C++

In this lesson, we demonstrate how to work with arrays using custom libraries in C++. The program uses two custom libraries, `MyArrayFunctionsLib` and `MyInputReaderLib`, to perform basic operations on arrays, such as filling them with random numbers or user inputs, and displaying their elements.

## Project Structure

The project contains the following components:
- **Main Program** (`main.cpp`): The driver code that demonstrates the usage of the two custom libraries.
- **Array Functions Library** (`MyArrayFunctionsLib.h`): This contains functions for working with arrays, such as filling them with random numbers or user inputs and printing their elements.
- **Input Reader Library** (`MyInputReaderLib.h`): This handles reading user input and generating random numbers.

### Main Program
The main program interacts with the user by:
1. Filling an array with random numbers.
2. Filling an array with user-provided inputs.
3. Displaying the elements of both arrays.

### Array Functions (`MyArrayFunctionsLib.h`)

The `MyArrayFunctionsLib` namespace contains three key functions:
1. **`FillArrayWithRandomNumbers()`**:
   - Asks the user for the desired array length.
   - Fills the array with random numbers between 1 and 100.
2. **`FillArrayWithUserInputs()`**:
   - Asks the user for the desired array length.
   - Fills the array with numbers provided by the user.
3. **`PrintArrayElements()`**:
   - Takes the array and its length as input and prints each element with its corresponding index.

### Input Reader Functions (`MyInputReaderLib.h`)

The `MyInputReaderLib` namespace provides helper functions:
1. **`ReadPositifInteger()`**:
   - Prompts the user for a positive integer and validates the input.
2. **`ReadRandomNumber()`**:
   - Generates and returns a random integer between the specified `From` and `To` values.

## How It Works

1. **First Array (Random Numbers)**:
   - The program asks the user to specify how many elements they want in the array.
   - It fills the array with random numbers using `MyArrayFunctionsLib::FillArrayWithRandomNumbers()`.
   - The array elements are then printed using `MyArrayFunctionsLib::PrintArrayElements()`.

2. **Second Array (User Input)**:
   - The program asks the user again to specify the number of elements.
   - This time, it fills the array with user-provided numbers using `MyArrayFunctionsLib::FillArrayWithUserInputs()`.
   - The array is printed to show the entered values.

### Example Output:

```
--------- The first Array --------- Please enter how many elements do you want to store : 5 
Element[1] : 17 
Element[2] : 45
Element[3] : 22
Element[4] : 89
Element[5] : 53

--------- The second Array --------- 
Please enter how many elements do you want to store : 3 
Please enter an element : 10 
Please enter an element : 20 
Please enter an element : 30 

Element[1] : 10 
Element[2] : 20 
Element[3] : 30
```


## Compilation and Execution

### Compilation:
To compile the program, run the following command:

```bash
g++ -o Lesson8 main.cpp MyArrayFunctionsLib.cpp MyInputReaderLib.cpp
```

### Execution:
Once compiled, you can execute the program by running:
```
./Lesson8
```

## Libraries Overview
- **`MyArrayFunctionsLib`**: Contains functions to manipulate and display array contents.
- **`MyInputReaderLib`**: Provides helper functions for reading user input and generating random numbers.

- This lesson emphasizes the importance of modularity and reusability in C++ by dividing the code into manageable libraries.
