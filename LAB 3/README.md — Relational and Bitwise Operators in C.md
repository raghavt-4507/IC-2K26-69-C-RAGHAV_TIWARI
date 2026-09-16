# Relational and Bitwise Operators in C

## Problem Statement

Write separate C programs to demonstrate the use of **relational operators** and **bitwise operators**.

### Relational Operators

The six relational operators in C are:

- `==` — Equal to
- `!=` — Not equal to
- `>` — Greater than
- `<` — Less than
- `>=` — Greater than or equal to
- `<=` — Less than or equal to

### Bitwise Operators

The six bitwise operators in C are:

- `&` — Bitwise AND
- `|` — Bitwise OR
- `^` — Bitwise XOR
- `~` — Bitwise NOT
- `<<` — Left Shift
- `>>` — Right Shift

The objective is to understand how these operators work and how their results can be displayed using C.

---

# Approach / Algorithm

## Relational Operators

For each relational operator:

1. Start the program.
2. Declare two integer variables.
3. Assign values to the variables.
4. Apply the required relational operator.
5. Display the result using `printf()`.
6. End the program.

A relational expression returns:

- `1` when the condition is **true**
- `0` when the condition is **false**

### Example

```c
int a = 10;
int b = 20;

printf("%d", a < b);
```

Since `10 < 20` is true, the output is:

```text
1
```

---

## Bitwise Operators

For each bitwise operator:

1. Start the program.
2. Declare one or two integer variables as required.
3. Assign values to the variables.
4. Apply the required bitwise operator.
5. Display the result.
6. End the program.

Bitwise operators work directly on the **binary representation of integers**.

---

# Programs

## Relational Operators

### 1. Equal To (`==`)

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 10;

    printf("%d", a == b);

    return 0;
}
```

**Output:**

```text
1
```

---

### 2. Not Equal To (`!=`)

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("%d", a != b);

    return 0;
}
```

**Output:**

```text
1
```

---

### 3. Greater Than (`>`)

```c
#include <stdio.h>

int main()
{
    int a = 20, b = 10;

    printf("%d", a > b);

    return 0;
}
```

**Output:**

```text
1
```

---

### 4. Less Than (`<`)

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("%d", a < b);

    return 0;
}
```

**Output:**

```text
1
```

---

### 5. Greater Than or Equal To (`>=`)

```c
#include <stdio.h>

int main()
{
    int a = 20, b = 10;

    printf("%d", a >= b);

    return 0;
}
```

**Output:**

```text
1
```

---

### 6. Less Than or Equal To (`<=`)

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("%d", a <= b);

    return 0;
}
```

**Output:**

```text
1
```

---

# Bitwise Operators

## 1. Bitwise AND (`&`)

```c
#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("Result = %d", a & b);

    return 0;
}
```

**Output:**

```text
Result = 1
```

### Binary Representation

```text
5 = 101
3 = 011

    101
&   011
---------
    001
```

Therefore:

```text
5 & 3 = 1
```

---

## 2. Bitwise OR (`|`)

```c
#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("Result = %d", a | b);

    return 0;
}
```

**Output:**

```text
Result = 7
```

```text
5 = 101
3 = 011

    101
|   011
---------
    111
```

Therefore:

```text
5 | 3 = 7
```

---

## 3. Bitwise XOR (`^`)

```c
#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("Result = %d", a ^ b);

    return 0;
}
```

**Output:**

```text
Result = 6
```

```text
5 = 101
3 = 011

    101
^   011
---------
    110
```

Therefore:

```text
5 ^ 3 = 6
```

---

## 4. Bitwise NOT (`~`)

```c
#include <stdio.h>

int main()
{
    int a = 5;

    printf("Result = %d", ~a);

    return 0;
}
```

**Output on typical two's-complement systems:**

```text
Result = -6
```

The `~` operator reverses each bit of the integer.

---

## 5. Left Shift (`<<`)

```c
#include <stdio.h>

int main()
{
    int a = 5;

    printf("Result = %d", a << 1);

    return 0;
}
```

**Output:**

```text
Result = 10
```

Binary representation:

```text
5 = 101

101 << 1 = 1010
```

Therefore:

```text
5 << 1 = 10
```

---

## 6. Right Shift (`>>`)

```c
#include <stdio.h>

int main()
{
    int a = 5;

    printf("Result = %d", a >> 1);

    return 0;
}
```

**Output:**

```text
Result = 2
```

Binary representation:

```text
5 = 101

101 >> 1 = 10
```

Therefore:

```text
5 >> 1 = 2
```

---

# Time & Space Complexity Analysis

All the programs perform a fixed number of operations.

| Operator Type | Time Complexity | Space Complexity |
|---|---|---|
| Relational Operators | O(1) | O(1) |
| Bitwise Operators | O(1) | O(1) |

### Time Complexity

**O(1)** means **constant time**.

The programs perform a fixed number of operations, regardless of the values stored in the variables.

### Space Complexity

**O(1)** means **constant space**.

Only a fixed amount of memory is required for the variables used in the programs.

---

# Sample Input / Output

These programs use **predefined values**, so they do not require user input.

## Relational Operators

| Operator | Values | Output |
|---|---|---:|
| `==` | `10 == 10` | `1` |
| `!=` | `10 != 20` | `1` |
| `>` | `20 > 10` | `1` |
| `<` | `10 < 20` | `1` |
| `>=` | `20 >= 10` | `1` |
| `<=` | `10 <= 20` | `1` |

## Bitwise Operators

| Operator | Values | Output |
|---|---|---:|
| `&` | `5 & 3` | `1` |
| `|` | `5 \| 3` | `7` |
| `^` | `5 ^ 3` | `6` |
| `~` | `~5` | `-6` |
| `<<` | `5 << 1` | `10` |
| `>>` | `5 >> 1` | `2` |

---

# Screenshots (Program Output)

Add screenshots of the output of each program to this section.

Recommended repository structure:

```text
Relational-Bitwise-Operators/
│
├── Relational/
│   ├── equal.c
│   ├── not_equal.c
│   ├── greater_than.c
│   ├── less_than.c
│   ├── greater_equal.c
│   └── less_equal.c
│
├── Bitwise/
│   ├── bitwise_and.c
│   ├── bitwise_or.c
│   ├── bitwise_xor.c
│   ├── bitwise_not.c
│   ├── left_shift.c
│   └── right_shift.c
│
├── screenshots/
│   ├── equal.png
│   ├── not_equal.png
│   ├── greater_than.png
│   ├── less_than.png
│   ├── greater_equal.png
│   ├── less_equal.png
│   ├── bitwise_and.png
│   ├── bitwise_or.png
│   ├── bitwise_xor.png
│   ├── bitwise_not.png
│   ├── left_shift.png
│   └── right_shift.png
│
└── README.md
```

You can add screenshots using Markdown:

```markdown
![Equal To Output](screenshots/equal.png)

![Bitwise AND Output](screenshots/bitwise_and.png)
```

---

# Learning Outcomes

After completing these programs, you will understand:

- The purpose of relational operators in C.
- All six relational operators: `==`, `!=`, `>`, `<`, `>=`, and `<=`.
- How relational expressions produce `1` or `0`.
- The purpose of bitwise operators.
- All six bitwise operators in C.
- How the `&` operator performs bitwise AND.
- How the `|` operator performs bitwise OR.
- How the `^` operator performs bitwise XOR.
- How the `~` operator performs bitwise NOT.
- How left shift (`<<`) works.
- How right shift (`>>`) works.
- How integers are represented in binary.
- How to use `printf()` to display results.
- The basic concept of time and space complexity.
- How to organize C programs into folders on GitHub.

---

# Operator Summary

## Relational Operators

| Operator | Name |
|---|---|
| `==` | Equal to |
| `!=` | Not equal to |
| `>` | Greater than |
| `<` | Less than |
| `>=` | Greater than or equal to |
| `<=` | Less than or equal to |

## Bitwise Operators

| Operator | Name |
|---|---|
| `&` | Bitwise AND |
| `|` | Bitwise OR |
| `^` | Bitwise XOR |
| `~` | Bitwise NOT |
| `<<` | Left Shift |
| `>>` | Right Shift |

---

# Conclusion

This collection demonstrates the **relational and bitwise operators available in C** through separate, simple programs.

Relational operators are used to compare values, while bitwise operators work on the individual bits of integer values. These programs provide a foundation for understanding conditions, binary operations, and more advanced C programming concepts.