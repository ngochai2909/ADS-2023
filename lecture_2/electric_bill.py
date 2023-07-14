x1, x2 = map(int,input().split())
so_dien = x2 - x1
if(so_dien <= 50):
    so_tien_dien = so_dien * 1484
elif(so_dien <= 100):
    so_tien_dien = 50 * 1484 + (so_dien - 50) * 1533
elif(so_dien <= 200):
    so_tien_dien = 50 * 1484 + 50 * 1533 + (so_dien - 100) * 1786
elif(so_dien <= 300):
    so_tien_dien = 50 * 1484 + 50 * 1533 + 100 * 1786+ (so_dien - 200) * 2242
elif(so_dien <= 400):
    so_tien_dien = 50 * 1484 + 50 * 1533 + 100 * 1786+ 100 * 2242+ (so_dien - 300) * 2503
else:
    so_tien_dien = 50 * 1484 + 50 * 1533 + 100 * 1786+ 100 * 2242+ 100 * 2503 + (so_dien - 400) * 2587
so_phai_tra = so_tien_dien + (10 * so_tien_dien)//100
print(so_phai_tra)
