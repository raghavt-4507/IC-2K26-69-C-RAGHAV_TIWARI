# C Programming Lab - Lab 09

## Introduction
This lab focuses on the use of loops and arrays in C programming. It includes programs to print different patterns using nested loops and to store and display multiple elements using arrays.

## Programs Included

1. Pattern Printing
2. Array Operations (Input and Display)

---

## Program 1: Pattern Printing

### Description
This program prints a right-angled triangle pattern using stars (*). It uses nested for loops to control the number of rows and stars in each row.

### Approach / Algorithm
1. Take the number of rows from the user.
2. Run an outer for loop to control the rows.
3. Run an inner for loop to print stars in each row.
4. Print a new line after completing each row.
5. Continue until the required number of rows is printed.

### Program
```c
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
```

### Sample Input
```text
5
```

### Sample Output
```text
Enter number of rows: 5
*
**
***
****
*****
```

### Time and Space Complexity
- Time Complexity: O(N²)
- Space Complexity: O(1)

---

## Program 2: Array Operations (Input and Display)

### Description
This program takes 5 integer elements from the user and stores them in an array. It then displays all the elements using a for loop.

### Approach / Algorithm
1. Declare an integer array of size 5.
2. Initialize a loop variable i.
3. Use a for loop to take 5 elements as input.
4. Store each element at its respective array index.
5. Use another for loop to display all the array elements.
6. Stop the program.

### Program
```c
#include <stdio.h>

int main()
{
    int a[5], i;

    printf("Enter 5 elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array elements are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
```

### Sample Input
```text
10 20 30 40 50
```

### Sample Output
```text
Enter 5 elements: 10 20 30 40 50
Array elements are: 10 20 30 40 50
```

### Time and Space Complexity
- Time Complexity: O(N)
- Space Complexity: O(N)

---

## Learning Outcomes

- Learned to create patterns using nested for loops.
- Understood the use of outer and inner loops.
- Learned the concept of arrays in C.
- Understood array declaration and initialization.
- Practised taking multiple inputs using arrays.
- Learned how to access array elements using indexes.
- Improved logical thinking and problem-solving skills.
