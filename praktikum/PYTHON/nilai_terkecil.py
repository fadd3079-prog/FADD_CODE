kecil = 0
angka = 0
i = 0

print("masukkan 10 angka: ")
for i in range(10):
    angka=int(input())
    if i==0:
        kecil=angka
    elif angka < kecil:
        kecil= angka

print(f"angka terkecil adalah {kecil}")
