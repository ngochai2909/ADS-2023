
def isPrime(n):
    if(n < 2):
        return False
    else:
        for i in range(2, int((n) ** 1/2)+1):
            if(n % i == 0):
                return False
    return True

def sum(n):
    sum =0;
    for i in range(n):
        if(isPrime(i)):
            sum += i
    return sum

n = int(input())
print(sum(n))
