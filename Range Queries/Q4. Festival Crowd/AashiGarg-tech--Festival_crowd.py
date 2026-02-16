import sys
input = sys.stdin.readline

n, q = map(int, input().split())
arr = list(map(int, input().split()))

queries = []
for i in range(q):
    l, r = map(int, input().split())
    queries.append((l - 1, r - 1, i))

block = int(n ** 0.5)

queries.sort(key=lambda x: (x[0] // block, x[1]))

freq = {}
distinct = 0
ans = [0] * q

cur_l = 0
cur_r = -1

def add(x):
    global distinct
    freq[x] = freq.get(x, 0) + 1
    if freq[x] == 1:
        distinct += 1

def remove(x):
    global distinct
    freq[x] -= 1
    if freq[x] == 0:
        distinct -= 1

for l, r, idx in queries:
    while cur_l > l:
        cur_l -= 1
        add(arr[cur_l])
    while cur_r < r:
        cur_r += 1
        add(arr[cur_r])
    while cur_l < l:
        remove(arr[cur_l])
        cur_l += 1
    while cur_r > r:
        remove(arr[cur_r])
        cur_r -= 1

    ans[idx] = distinct

for x in ans:
    print(x)
