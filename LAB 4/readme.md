# LAB 4

The programs included in this lab are related to **increment, decrement, error detection, signed integers, and unsigned integers**.

---

## Programs Included

* Increment Operator
* Decrement Operator
* Error Detection
* Signed Integer
* Unsigned Integer

---

## 1. Increment Operator

### Program

```c
#include <stdio.h>

int main()
{
    int a = 10;

    a++;

    printf("Value of a = %d", a);

    return 0;
}
```

### Output

```text
Value of a = 11
```

### Explanation

The `++` operator is used to increase the value of a variable by 1.

Here, the initial value of `a` is `10`. After applying `a++`, the value becomes `11`.

---

## 2. Decrement Operator

### Program

```c
#include <stdio.h>

int main()
{
    int a = 10;

    a--;

    printf("Value of a = %d", a);

    return 0;
}
```

### Output

```text
Value of a = 9
```

### Explanation

The `--` operator is used to decrease the value of a variable by 1.

Here, the initial value of `a` is `10`. After applying `a--`, the value becomes `9`.

---

## 3. Error Detection

This program demonstrates a basic syntax error and how it can be detected and corrected.

### Program with Error

```c
#include <stdio.h>

int main()
{
    int a = 10
    printf("Value of a = %d", a);

    return 0;
}
```

### Error

The semicolon `;` is missing after:

```c
int a = 10
```

This causes a syntax error when the program is compiled.

### Corrected Program

```c
#include <stdio.h>

int main()
{
    int a = 10;

    printf("Value of a = %d", a);

    return 0;
}
```

### Output

```text
Value of a = 10
```

### Explanation

In C, a semicolon is required at the end of most statements. Adding the missing semicolon fixes the syntax error.

---

## 4. Signed Integer

### Program

```c
#include <stdio.h>

int main()
{
    signed int a = -10;

    printf("Signed integer = %d", a);

    return 0;
}
```

### Output

```text
Signed integer = -10
```

### Explanation

A signed integer can store both positive and negative whole numbers.

In this program, the variable `a` is declared as a signed integer and stores the value `-10`.

---

## 5. Unsigned Integer

### Program

```c
#include <stdio.h>

int main()
{
    unsigned int a = 10;

    printf("Unsigned integer = %u", a);

    return 0;
}
```

### Output

```text
Value = 10
```

### Explanation

An unsigned integer is used to store zero and positive whole numbers.

In this program, the variable `a` is declared as an unsigned integer and stores the value `10`.

---

## Time and Space Complexity

All the programs in this lab perform a fixed number of operations and use a constant amount of memory.

| Program                 | Time Complexity | Space Complexity |
| ----------------------- | --------------- | ---------------- |
| Increment               | O(1)            | O(1)             |
| Decrement               | O(1)            | O(1)             |
| Error Detection Example | O(1)            | O(1)             |
| Signed Integer          | O(1)            | O(1)             |
| Unsigned Integer        | O(1)            | O(1)             |

---

## Learning

Through these programs, I practiced:

* Using increment and decrement operators.
* Understanding basic syntax errors in C.
* Identifying and correcting a missing semicolon.
* Using signed integers.
* Using unsigned integers.
* Compiling and running basic C programs.
* Understanding basic time and space complexity.
