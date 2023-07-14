def largestDigits(n):
    max = 0
    while(n > 0):
        x = n % 10
        if(x > max):
            max = x
        n = n // 10
    print(max)

n = int(input())
largestDigits(n)