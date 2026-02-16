n, m = map(int, input().split())

moves = min(n, m)

if moves % 2 == 1:
    print("Tron")
else:
    print("Clu")
