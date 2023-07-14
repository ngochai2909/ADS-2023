n = input()
flag = True
for i in range(len(n)):
    n = n.upper()
    if (n[i] == 'B' or n[i] == 'I' or n[i] == 'G' or n[i] == 'O'):
        flag = True
        break
    else:
        flag = False

if(flag == True):
   print("YES")
else:
    print("NO")
