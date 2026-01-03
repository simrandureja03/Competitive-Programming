# 1. Kuriyama Mirai's Stones

### Description
Kuriyama Mirai has `n` stones, where the cost of the `i`-th stone is `v[i]`.

She asks `m` queries of two types:

- **Type 1**: Given `l` and `r`, find the sum of costs  
  \[
  v[l] + v[l+1] + \dots + v[r]
  \]

- **Type 2**: Let `u` be the array formed by sorting `v` in non-decreasing order.  
  Given `l` and `r`, find the sum  
  \[
  u[l] + u[l+1] + \dots + u[r]
  \]

You must answer each query correctly, or Kuriyama Mirai will become unhappy.

---

### Input
- The first line contains an integer `n` — the number of stones.
- The second line contains `n` integers `v[i]` — the costs of the stones.
- The third line contains an integer `m` — the number of queries.
- Each of the next `m` lines contains three integers `type`, `l`, and `r`:
  - If `type = 1`, answer the query on the original array.
  - If `type = 2`, answer the query on the sorted array.

---

### Output
Print `m` lines.  
Each line should contain the answer to the corresponding query.

---

### Constraints
- `1 ≤ n, m ≤ 10^5`
- `1 ≤ v[i] ≤ 10^9`
- `1 ≤ l ≤ r ≤ n`
- Answers may exceed 32-bit integer limits.

---

### Sample

**Input:**
6
6 4 2 7 2 7
3
2 3 6
1 3 4
1 1 6


**Output:**
24
9
28

