### Square-Year-CF


The problem asks whether a given 4-digit year (represented as a string) can be expressed as $(a + b)^2$, where $a$ and $b$ are non-negative integers. Since the year is a number, we first convert the string into an integer. Then, we check if this integer is a perfect square by finding its integer square root and verifying if squaring that root equals the number.

If it is a perfect square, we know that $a + b$ equals that root. Since the problem allows any non-negative $a, b$ with $a + b = \text{root}$, we can simply output $a=0$ and $b=\text{root}$. If no such perfect square exists, we print -1. This straightforward approach works efficiently for all test cases.
