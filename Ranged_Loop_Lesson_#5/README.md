# Lesson 5: Ranged Loop in C++

This lesson covers the usage of **ranged-based for loops** in C++, a modern and concise way to iterate over arrays and collections.

## Project Overview

The program demonstrates how to use a **range-based for loop** to iterate over an array of integers and print each element. This loop is a cleaner and more readable alternative to traditional for loops, particularly when the goal is to simply access and process each element in a collection.

### Key Concepts
- **Range-Based For Loop**: Introduced in C++11, this loop simplifies the process of iterating through containers (like arrays, vectors, etc.) by automatically handling the indexing.
  - Syntax:
    ```cpp
    for (data_type variable_name : container) {
        // code to process each element
    }
    ```

- **Arrays**: Arrays store multiple values of the same type in contiguous memory. The program uses a static array of integers.

## How It Works

1. **Array Declaration**:
   - An integer array `Arr[]` is initialized with values:
     ```cpp
     int Arr[] = { 1 ,2,2,3,5,8,7,3,5,4,9 };
     ```

2. **Range-Based For Loop**:
   - A range-based for loop is used to iterate over each element of the array `Arr` and print it to the console:
     ```cpp
     for (int i : Arr)
         cout << i << endl;
     ```

   - The loop automatically assigns each element of the array to the variable `i` one by one, eliminating the need for manual indexing.

### Example Output
```
1
2
2
3
5
8
7
3
5
4 
9
```

## Code Breakdown

### Main Program (`main.cpp`)
- The array `Arr[]` contains 11 integers.
- The range-based for loop iterates over each element in the array, storing each element in `i`, and printing it out using `cout`.

### Traditional vs Range-Based Loop

A traditional for loop for this task would look like:
```cpp
for (int i = 0; i < sizeof(Arr)/sizeof(Arr[0]); ++i)
    cout << Arr[i] << endl;
```
With the range-based for loop, the same task is achieved in a more concise and readable manner.

## Compilation and Execution

### Compilation:
To compile the program, use the following command:
```
g++ -o Ranged_Loop_Lesson_#4 Ranged_Loop_Lesson_#4.cpp
```
### Execution:
After compiling, you can run the program with:
```
./Ranged_Loop_Lesson_#4
```
## Conclusion
This lesson demonstrates the simplicity and readability of range-based for loops in C++. By avoiding manual indexing, they reduce the likelihood of errors and make the code easier to maintain, especially when iterating over arrays or collections.

