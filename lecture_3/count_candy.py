n = int(input())
count =0
for i in range(n):
  x = int(input())
  if(x % 2==0):
    count +=1
if(count == n):
  print("YES")
else:
  print("NO")