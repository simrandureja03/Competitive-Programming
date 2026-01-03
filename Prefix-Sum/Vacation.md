# 1. Vacation

### Description
Chefland is represented as an `N × M` grid where each cell has a cost of either `0` or `1`.

Chef will travel for `Q` days. On the `i`-th day, Chef wants to travel from square  
`(Ai, Bi)` to `(Ci, Di)` such that `Ai ≤ Ci` and `Bi ≤ Di`.

Chef can only move:
- **Right**: `(X, Y) → (X, Y + 1)`
- **Down**: `(X, Y) → (X + 1, Y)`

The **cost of a trip** is defined as the **product of the costs of all grid cells** visited on the path, including the starting and ending cells.

For each trip, determine the **minimum possible cost**.

---

### Input
- The first line contains two integers `N` and `M` — number of rows and columns.
- The next `N` lines contain `M` integers (`0` or `1`) representing the grid.
- The next line contains an integer `Q` — number of trips.
- The next `Q` lines each contain four integers `Ai, Bi, Ci, Di`.

---

### Output
For each trip, print the minimum possible cost.

---

### Constraints
- `1 ≤ N × M ≤ 2 × 10^5`
- `1 ≤ Q ≤ 2 × 10^5`
- `1 ≤ Ai ≤ Ci ≤ N`
- `1 ≤ Bi ≤ Di ≤ M`

---

### Sample

**Input:**
5 4
1 0 1 1
1 1 1 1
0 1 1 1
1 1 1 1
1 1 1 0
10
2 2 5 3
1 4 5 4
1 1 5 4
1 1 5 1
2 2 4 4
3 1 5 3
4 1 4 4
3 1 5 4
4 1 5 3
1 3 4 4

**Output:**
1
0
0
0
1
0
1
0
1
1

---

### Explanation
Since the product becomes `0` if **any cell with cost `0` is visited**, the goal is to determine whether a path exists that avoids zero-cost cells.

Efficient solutions use **prefix sums and preprocessing** to answer each query optimally.
