max = 0
flag = True # Trong python, ko cần phải bool, cứ thế mà gán thôi
while(True):
    x = int(input())
    if(x == 0):
        break
    elif(x > max):
        max = x 
    elif(x < max):
        flag = False
if(flag == True):
    print("YES")
elif(flag == False):
    print("NO")
