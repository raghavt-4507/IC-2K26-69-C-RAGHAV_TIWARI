# C Programming Lab - Lab 06

## Introduction
This lab focuses on the use of loops and conditional statements in C programming. It includes programs to find prime numbers within a given range and to check whether a number is an Armstrong number.

## Programs Included

1. Prime Numbers Between 1 and N
2. Armstrong Number

---

## Program 1: Prime Numbers Between 1 and N

### Description
This program takes a number N as input and prints all prime numbers between 1 and N. It also counts the total number of prime numbers found in the given range.

### Approach / Algorithm
1. Take the value of N from the user.
2. Run an outer loop from 2 to N.
3. Initialize a flag variable to 0 for each number.
4. Check divisibility of the current number using an inner loop.
5. If the number is divisible by any number other than 1 and itself, set flag = 1.
6. If the flag remains 0, print the number and increase the count.
7. Display the total count of prime numbers.

### Program
```c
#include <stdio.h>

int main()
{
    int n, num, i, flag, count = 0;

    scanf("%d", &n);

    for(num = 2; num <= n; num++)
    {
        flag = 0;

        for(i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", num);
            count++;
        }
    }

    printf("\nTotal prime numbers = %d", count);

    return 0;
}
```

### Sample Input
```text
20
```

### Sample Output
```text
2 3 5 7 11 13 17 19
Total prime numbers = 8
```

### Time and Space Complexity
- Time Complexity: O(N√N)
- Space Complexity: O(1)

---

## Program 2: Armstrong Number

### Description
This program takes a number as input and checks whether it is an Armstrong number or not. It reverses the process of extracting digits and calculates the sum of each digit raised to the power of the number of digits.

### Approach / Algorithm
1. Take a number from the user.
2. Store the original number in a separate variable.
3. Count the total number of digits.
4. Extract each digit using the modulus operator (%).
5. Calculate the power of each digit using a loop.
6. Add the calculated values.
7. Compare the sum with the original number.
8. If both are equal, the number is an Armstrong number; otherwise, it is not.

### Program
```c
#include <stdio.h>

int main()
{
    int n, original, rem, sum = 0;
    int digits = 0, temp, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    temp = n;

    while(temp > 0)
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
        {
            power = power * rem;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if(sum == original)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an Armstrong Number");
    }

    return 0;
}
```

### Sample Input
```text
153
```

### Sample Output
```text
Enter a number: 153
Armstrong Number
```

### Time and Space Complexity
- Time Complexity: O(D²), where D is the number of digits.
- Space Complexity: O(1)

---

## Learning Outcomes

- Understood the concept of prime numbers.
- Learned to use nested loops for checking prime numbers.
- Understood the use of flag and count variables.
- Learned to extract digits using the modulus (%) operator.
- Practised using while and for loops together.
- Understood the logic behind Armstrong numbers.
- Improved problem-solving skills using loops and conditional statements.
