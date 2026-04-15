def hitung_rata():
    n=int(input("masukkan jumlah bilangan: "))
    total=0
    for i in range(1, n+1):
        x=float(input(f"bilangan ke-{i}: "))
        total=total+ x
    rata=total / n
    print(f"rata-rata = {rata:.2f}")
hitung_rata()
