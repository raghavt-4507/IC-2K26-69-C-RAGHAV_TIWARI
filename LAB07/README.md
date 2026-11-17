# C Programming Lab - Lab 07

## Introduction
This lab focuses on the use of loops, conditional statements, and logical operators in C programming. It includes programs to find numbers divisible by 3 but not by 5 and to generate the Fibonacci series along with the sum of its even-valued terms.

## Programs Included

1. Numbers Divisible by 3 but Not by 5
2. Fibonacci Series and Sum of Even-Valued Terms

---

## Program 1: Numbers Divisible by 3 but Not by 5

### Description
This program takes a number N as input and prints all numbers between 1 and N that are divisible by 3 but not by 5. It also calculates the total count of such numbers.

### Approach / Algorithm
1. Take the value of N from the user.
2. Initialize a count variable to 0.
3. Run a for loop from 1 to N.
4. Check whether the current number is divisible by 3 using the modulus operator (%).
5. Check whether the number is not divisible by 5.
6. If both conditions are true, print the number and increment the count.
7. Display the total count of numbers.

### Program
```c
#include <stdio.h>

int main()
{
    int n, i, count = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers are: ");

    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 != 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal count = %d", count);

    return 0;
}
```

### Sample Input
```text
20
```

### Sample Output
```text
Enter the value of n: 20
Numbers are: 3 6 9 12 18
Total count = 5
```

### Time and Space Complexity
- Time Complexity: O(N)
- Space Complexity: O(1)

---

## Program 2: Fibonacci Series and Sum of Even-Valued Terms

### Description
This program generates the Fibonacci series up to N terms and calculates the sum of all even-valued terms in the series. Each term is obtained by adding the previous two terms.

### Approach / Algorithm
1. Take the number of terms N from the user.
2. Initialize the first two Fibonacci terms as a = 0 and b = 1.
3. Initialize sum = 0.
4. Run a for loop from 1 to N.
5. Print the current Fibonacci term.
6. Check whether the current term is even using the modulus operator (%).
7. If the term is even, add it to the sum.
8. Calculate the next term by adding a and b.
9. Update the values of a and b.
10. Display the sum of even-valued terms.

### Program
```c
#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c;
    int sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        if(a % 2 == 0)
        {
            sum = sum + a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of even terms = %d", sum);

    return 0;
}
```

### Sample Input
```text
8
```

### Sample Output
```text
Enter the number of terms: 8
Fibonacci series: 0 1 1 2 3 5 8 13
Sum of even terms = 10
```

### Time and Space Complexity
- Time Complexity: O(N)
- Space Complexity: O(1)

---

## Learning Outcomes

- Learned to use logical AND (&&) operator in C.
- Understood the use of modulus (%) operator for checking divisibility.
- Practised using for loops and conditional statements.
- Learned to generate the Fibonacci series.
- Understood how to calculate the sum of even-valued terms.
- Improved problem-solving skills using loops and variables.
