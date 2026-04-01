# Large-Integer-Arithmetic

## Program Description
This program implements a class `largeIntegers` that stores integers of arbitary length using strings. It supports:
- Additon
- Subtraction
- Multiplication
- Division

The class avoids built-in integer limits by performing digit-by-digit arithmetic.

### Inputs
- Two large integers (entered as strings)

Example:

123456789987654321

987654321123456789

### Outputs
- Sum
- Difference
- Product
- Comparison Result

## Compile and Run Instructions
**Using g++**

*g++ main.cpp largeIntegers.cpp -o large*

*./large*

## Design Documentation
**Detailed Psuedocode**

Start

Input two large numbers as strings

Create largeIntegers objects A and B

Perform:
  sum = A + B
  difference = A - B
  product = A * B
  comparison = compare(A, B)

Display all results

End 

## UML Class Diagram 
<img width="336" height="330" alt="image" src="https://github.com/user-attachments/assets/b55cd96c-c0a7-42e0-9206-ca62226bce64" />

## Use Case Diagram
<img width="554" height="528" alt="image" src="https://github.com/user-attachments/assets/eab43025-c51a-44d3-8460-85b93fa223cd" />

## Program Execution Evidence


