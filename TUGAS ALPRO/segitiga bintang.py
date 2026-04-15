n = int(input("Masukkan jumlah baris: "))

if n > 0:
    i = 1
    while i <= n:
        print("*" * i)
        i += 1
else:
    print("massukan angka positif")
