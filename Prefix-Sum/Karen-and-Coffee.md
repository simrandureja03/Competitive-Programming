# 1. Karen and Coffee

### Description
Karen loves coffee and wants to know which brewing temperatures are *admissible*.  
She has **n coffee recipes**. Each recipe suggests that coffee should be brewed between **li** and **ri** (inclusive) degrees.

A temperature is called **admissible** if it is recommended by at least **k** recipes.

Karen then asks **q questions**. Each question gives a range **[a, b]**.  
For each question, determine how many *admissible integer temperatures* fall within the given range.

---

### Input
- The first line contains three integers **n**, **k**, and **q**  
  `(1 ≤ k ≤ n ≤ 200000, 1 ≤ q ≤ 200000)`
- The next **n** lines each contain two integers **li** and **ri**  
  `(1 ≤ li ≤ ri ≤ 200000)` — the recommended temperature range of the i-th recipe.
- The next **q** lines each contain two integers **a** and **b**  
  `(1 ≤ a ≤ b ≤ 200000)` — the query range.

---

### Output
For each query, print a single integer — the number of admissible integer temperatures in `[a, b]`.

---

### Sample

**Input:**
3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100

**Output:**
3
3
0
4
