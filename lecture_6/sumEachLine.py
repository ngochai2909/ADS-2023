a = []
rows, cols = map(int,input().split())
for i in range(rows):
    x = list(map(int,input().split()))
    a.append(x)


for i in range(rows):
    sum = 0
    for j in range(cols):
      sum += a[i][j]
    print(f"{i}: {sum}")
