# Bitwise AND/OR Operations in C++

This project demonstrates how to use **bitwise operators** in C++ to perform bit-level operations like AND (`&`) and OR (`|`). The program computes the result of these operations between two integers (25 and 18) and displays the output.

## Code Description

The program performs the following bitwise operations:

1. **Bitwise OR (`|`)**:
   - Compares each bit of two integers and returns `1` if either of the bits is `1`, otherwise `0`.
   - Example: `25 | 18`
   - Binary representation:
     ```
     25: 11001
     18: 10010
     ------------
     OR : 11011 (27 in decimal)
     ```

2. **Bitwise AND (`&`)**:
   - Compares each bit of two integers and returns `1` if both bits are `1`, otherwise `0`.
   - Example: `25 & 18`
   - Binary representation:
     ```
     25: 11001
     18: 10010
     ------------
     AND: 10000 (16 in decimal)
     ```

### Output
- **Bitwise OR Result**: The program computes `25 | 18`, resulting in `27`.
- **Bitwise AND Result**: The program computes `25 & 18`, resulting in `16`.

### Code Breakdown

```cpp
#include <iostream>

int main() {
    int resultBitWiseOr = (25 | 18);
    int resultBitWiseAnd = (25 & 18);
    
    std::cout << "BitWiseOr : " << resultBitWiseOr << "\nBitWiseAnd : " << resultBitWiseAnd << std::endl;
    return 0;
}
```
* `int resultBitWiseOr = (25 | 18);` — This line computes the bitwise `OR` between `25` and `18`.
* `int resultBitWiseAnd = (25 & 18)`; — This line computes the bitwise `AND` between `25` and `18`.
* The results are printed using `std::cout`.

## How to Compile and Run
### Compile:
* Using g++:
```
g++ -o Bitwise_And_OR Bitwise_And_OR.cpp
```
### Run:
* Execute the compiled file:
```
./Bitwise_And_OR
```

## Output Example
```
BitWiseOr : 27
BitWiseAnd : 16
```
## Learning Points
* `Bitwise OR (|)`: Useful when you need to set bits in an integer.
* `Bitwise AND (&)`: Useful for clearing or masking bits.

These operations are frequently used in low-level programming, cryptography, and hardware interfacing where manipulation of bits is necessary.