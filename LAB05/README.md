# C Programming Lab - 05

This lab contains four C programs based on conditional statements, loops, Fibonacci series, and swapping of numbers.

## Programs Included

1. Greatest Number Among Three Numbers
2. Sum of N Numbers Using For Loop
3. Fibonacci Series
4. Swapping of Two Numbers

---

# 1. Greatest Number Among Three Numbers

### Description

This program finds the greatest number among three predefined numbers using `if-else` statements.

### Approach

Three integer values are assigned directly to variables. The program compares them using relational and logical operators and prints the greatest number.

### Algorithm

1. Declare three integer variables `a`, `b`, and `c`.
2. Assign predefined values to them.
3. Check if `a` is greater than both `b` and `c`.
4. Otherwise, check if `b` is greater than both `a` and `c`.
5. If neither condition is true, `c` is the greatest.
6. Print the greatest number.

### Time Complexity

**O(1)**

The program performs a fixed number of comparisons.

### Space Complexity

**O(1)**

Only a fixed number of variables are used.

### Sample Output

```text
40 is the greatest number
```

---

# 2. Sum of N Numbers Using For Loop

### Description

This program takes `N` numbers as input from the user and calculates their sum using a `for` loop.

### Approach

The program initializes `sum` to zero and repeatedly takes a number from the user. Each number is added to `sum` until all `N` numbers have been processed.

### Algorithm

1. Declare variables `n`, `i`, `num`, and `sum`.
2. Initialize `sum = 0`.
3. Take the value of `n` from the user.
4. Run a `for` loop from `1` to `n`.
5. Take a number from the user in each iteration.
6. Add the number to `sum`.
7. Print the final sum.

### Time Complexity

**O(n)**

The loop runs `n` times.

### Space Complexity

**O(1)**

Only a few variables are used regardless of the value of `n`.

### Sample Input

```text
Enter the value of n: 5
Enter number 1: 10
Enter number 2: 20
Enter number 3: 30
Enter number 4: 40
Enter number 5: 50
```

### Sample Output

```text
Sum = 150
```

---

# 3. Fibonacci Series

### Description

This program takes the number of terms from the user and prints the Fibonacci series.

The Fibonacci series starts with `0` and `1`, and every next number is obtained by adding the previous two numbers.

### Approach

The program uses three variables to store the current two Fibonacci numbers and their sum. A loop is used to generate the required number of terms.

### Algorithm

1. Declare variables `n`, `a`, `b`, `next`, and `i`.
2. Initialize `a = 0` and `b = 1`.
3. Take the number of terms `n` from the user.
4. Run a loop for `n` terms.
5. Print the current value of `a`.
6. Calculate the next term using `next = a + b`.
7. Update `a` and `b`.
8. Continue until all terms are printed.

### Time Complexity

**O(n)**

The loop runs `n` times.

### Space Complexity

**O(1)**

Only a fixed number of variables are used.

### Sample Input

```text
Enter the number of terms: 7
```

### Sample Output

```text
Fibonacci Series: 0 1 1 2 3 5 8
```

---

# 4. Swapping of Two Numbers

### Description

This program swaps the values of two predefined numbers using a temporary variable.

### Approach

A temporary variable is used to safely store the value of one variable while the values of the two variables are exchanged.

### Algorithm

1. Declare three integer variables `a`, `b`, and `temp`.
2. Assign predefined values to `a` and `b`.
3. Store the value of `a` in `temp`.
4. Assign the value of `b` to `a`.
5. Assign the value of `temp` to `b`.
6. Print the values before and after swapping.

### Time Complexity

**O(1)**

Only a fixed number of operations are performed.

### Space Complexity

**O(1)**

Only three integer variables are used.

### Sample Output

```text
Before swapping: a = 10, b = 20
After swapping: a = 20, b = 10
```

---

# Learning Outcomes

After completing this lab, I learned:

- How to use `if-else` statements for decision making.
- How to compare multiple numbers using relational and logical operators.
- How to use `for` loops for repetitive operations.
- How to calculate the sum of multiple numbers.
- How the Fibonacci series is generated.
- How to use variables to store and update values.
- How to swap two numbers using a temporary variable.
- How to analyze the basic time and space complexity of C programs.
- How to take input from the user using `scanf()`.
- How to display results using `printf()`.

---

## Language Used

**C**

## Topics Covered

- Variables
- Data Types
- `printf()`
- `scanf()`
- `if-else`
- Relational Operators
- Logical Operators
- `for` Loop
- Arithmetic Operators
- Temporary Variables
- Basic Time and Space Complexity
