a = []
def sum(n):
    sum =0;
    for i in range(n):
        sum += a[i]
    return sum

n = int(input())
for i in range(n):
    a.append(int(input())) 
print(sum(n))