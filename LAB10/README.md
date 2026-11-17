# C Programming Lab - Lab 10

## Introduction
This lab focuses on user-defined data types in C programming. It includes programs using structures and unions to store and manage different types of data under a single name.

## Programs Included

1. Structure in C
2. Union in C

---

## Program 1: Structure in C

### Description
This program uses a structure to store student details such as roll number, age, and marks. A structure allows us to group different data types under a single name. The program takes input from the user and displays the student details.

### Approach / Algorithm
1. Define a structure named Student.
2. Declare structure members such as roll, age, and marks.
3. Create a structure variable named s1.
4. Take roll number, age, and marks as input from the user.
5. Use the dot (.) operator to access the structure members.
6. Display the entered student details.

### Program
```c
#include <stdio.h>

struct Student
{
    int roll;
    int age;
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");

    printf("Roll Number: %d\n", s1.roll);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

### Sample Input
```text
101
18
85.5
```

### Sample Output
```text
Enter roll number: 101
Enter age: 18
Enter marks: 85.5

--- Student Details ---
Roll Number: 101
Age: 18
Marks: 85.50
```

### Time and Space Complexity
- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Program 2: Union in C

### Description
This program uses a union named Student to store roll number, age, and marks. A union allows different data types to share the same memory location. Only one member's value is valid at a time.

### Approach / Algorithm
1. Define a union named Student.
2. Declare members such as roll, age, and marks.
3. Create a union variable named s1.
4. Take roll number as input and display it.
5. Take age as input and display it.
6. Take marks as input and display it.
7. Understand that all members share the same memory location, so the previous value is overwritten when another member is assigned.

### Program
```c
#include <stdio.h>

union Student
{
    int roll;
    int age;
    float marks;
};

int main()
{
    union Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Roll Number = %d\n", s1.roll);

    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Age = %d\n", s1.age);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}
```

### Sample Input
```text
101
18
85.5
```

### Sample Output
```text
Enter roll number: 101
Roll Number = 101
Enter age: 18
Age = 18
Enter marks: 85.5
Marks = 85.50
```

### Time and Space Complexity
- Time Complexity: O(1)
- Space Complexity: O(1)

---

## Learning Outcomes

- Understood the concept of user-defined data types in C.
- Learned how to declare and use structures.
- Practised accessing structure members using the dot (.) operator.
- Understood the concept of unions.
- Learned how union members share the same memory location.
- Understood the difference between structure and union.
- Improved knowledge of memory management in C programming.
