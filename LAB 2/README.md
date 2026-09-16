# Basic Arithmetic Operations in C

1) Problem Statement:
Write C programs to perform the four basic arithmetic operations on two numbers:
* Addition
* Subtraction
* Multiplication
* Division

1.1) Addition:
Operator: +

Algorithm:
1. Start the program.
2. Declare two integer variables.
3. Assign values to the variables.
4. Add the two numbers using `+`.
5. Display the result.
6. End the program.

1.2) Subtraction:
Operator: -

Algorithm:
1. Start the program.
2. Declare two integer variables.
3. Assign values to the variables.
4. Subtract the second number from the first using `-`.
5. Display the result.
6. End the program.

1.3) Multiplication:

Operator: *

Algorithm:
1. Start the program.
2. Declare two integer variables.
3. Assign values to the variables.
4. Multiply the two numbers using `*`.
5. Display the result.
6. End the program.

1.4) Division:
Operator: /

Algorithm:
1. Start the program.
2. Declare two integer variables.
3. Assign values to the variables.
4. Divide the first number by the second using `/`.
5. Display the result.
6. End the program.

2) Programs:

2.1) Addition:

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int sum;

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}

2.2) Subtraction:

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;
    int difference;

    difference = a - b;

    printf("Difference = %d", difference);

    return 0;
}

2.3) Multiplication:

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int product;

    product = a * b;

    printf("Product = %d", product);

    return 0;
}


2.4) Division:

#include <stdio.h>

int main()
{
    int a = 20;
    int b = 10;
    int quotient;

    quotient = a / b;

    printf("Quotient = %d", quotient);

    return 0;
}


3) Time & Space Complexity Analysis:

All four programs perform only one arithmetic operation.

| Operation      | Time Complexity | Space Complexity |
| -------------- | --------------- | ---------------- |
| Addition       | O(1)            | O(1)             |
| Subtraction    | O(1)            | O(1)             |
| Multiplication | O(1)            | O(1)             |
| Division       | O(1)            | O(1)             |

3.1) Explanation

* Time Complexity: O(1) because each program performs a fixed number of operations.
* Space Complexity: O(1) because only a constant amount of memory is used.


4) Sample Input / Output:

These programs use predefined values, so no user input is required.

4.1) Addition:

Input:
a = 10
b = 20

Output:
Sum = 30

4.2) Subtraction:

Input:
a = 20
b = 10

Output:
Difference = 10

4.3) Multiplication:

Input:
a = 10
b = 20

Output:
Product = 200

4.4) Division:

Input:
a = 20
b = 10

Output:
Quotient = 2

5) Learning Outcomes:

*The basic structure of a C program.
*How to declare and initialize variables.
*The use of integer data types.
*How arithmetic operators work in C.
*The difference between +, -, *, and /.
*How to store calculation results in variables.
*How to display results using printf().
*The concept of time and space complexity.
*How to organize and document C programs in a GitHub repository.
