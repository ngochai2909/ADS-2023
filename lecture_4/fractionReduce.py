def gdc(a,b):
    while(a !=b):
        if(a > b):
            a = a -b
        else:
            b = b-a
    return a 

def reduction-Fraction(a,b):
    numerator = a //gdc(a,b)
    denomirator = b // gdc(a,b)
    print(numerator, denomirator)

a = int(input())
b = int(input())
reduction-Fraction(a,b)