# C Programming Lab - Lab 08

## Introduction
This lab focuses on the use of loops, conditional statements, and switch case in C programming. It includes programs to check whether a number is a palindrome and to perform basic arithmetic operations using a simple calculator.

## Programs Included

1. Palindrome Number
2. Simple Calculator Using Switch Case

---

## Program 1: Palindrome Number

### Description
This program takes a number as input and checks whether it is a palindrome or not. A palindrome number is a number that remains the same when its digits are reversed.

### Approach / Algorithm
1. Take a number from the user.
2. Store the original number in a separate variable.
3. Initialize reverse = 0.
4. Use a while loop to extract the last digit using the modulus (%) operator.
5. Build the reversed number by multiplying reverse by 10 and adding the extracted digit.
6. Remove the last digit using integer division (/).
7. Compare the reversed number with the original number.
8. If both are equal, print that it is a palindrome; otherwise, print that it is not a palindrome.

### Program
```c
#include <stdio.h>

int main()
{
    int n, original, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if(original == reverse)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}
```

### Sample Input
```text
121
```

### Sample Output
```text
Enter a number: 121
Palindrome Number
```

### Time and Space Complexity
- Time Complexity: O(D), where D is the number of digits.
- Space Complexity: O(1)

---

## Program 2: Simple Calculator Using Switch Case

### Description
This program performs basic arithmetic operations such as addition, subtraction, multiplication, and division using a switch case statement. The user enters two numbers and selects an operation.

### Approach / Algorithm
1. Declare variables to store two numbers and the user's choice.
2. Take two numbers as input from the user.
3. Display the available arithmetic operations.
4. Ask the user to enter their choice.
5. Use a switch case statement to perform the selected operation.
6. Use break to exit each case after performing the operation.
7. Use the default case to handle invalid choices.
8. Display the result.

### Program
```c
#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            if(b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not possible");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
```

### Sample Input
```text
Enter two numbers: 10 5
Enter your choice: 1
```

### Sample Output
```text
Result = 15
```

### Time and Space Complexity
- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Learning Outcomes

- Understood the concept of palindrome numbers.
- Learned to reverse a number using loops.
- Practised using modulus (%) and division (/) operators.
- Understood the working of switch case statements.
- Learned to perform basic arithmetic operations in C.
- Understood the use of break and default statements.
- Improved logical thinking and problem-solving skills.
