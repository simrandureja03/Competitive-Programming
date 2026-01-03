# Super Pow

### Description
Your task is to compute the value of **a^b mod 1337**, where:

- **a** is a positive integer
- **b** is a very large positive integer represented as an array of digits

You are given:
- An integer **a**
- An array of digits **b**

Return the value of **a raised to the power of b**, modulo **1337**.

---

### Input
- The first line contains an integer **a**
- The second line contains an array of digits **b**, representing the exponent

**Constraints:**
- 1 ≤ a ≤ 2³¹ - 1  
- 1 ≤ b.length ≤ 2000  
- 0 ≤ b[i] ≤ 9  
- b does not contain leading zeros

---

### Output
Print a single integer — the value of **a^b mod 1337**

---

### Sample

**Input:**
2
[1, 0]


**Output:**
1024

---

**Input:**
2
[3]

**Output:**
8
