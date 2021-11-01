def menuBangunDatar():
    print('''===Menu Bangun Datar
1. Persegi
2. Persegi Panjang
3. Lingkaran''')

def persegi():
    print("===Rumus persegi===\n1. Luas\n2. Keliing")
    rumus = int(input("\nPilih rumus : "))
    if rumus == 1:
        sisi = int(input("Masukkan sisi: "))
        luas = sisi * sisi
        print(f"Luas yang didapatkan : {luas}")
    elif rumus == 2:
        sisi = int(input("Masukkan sisi: "))
        keliling = 4 * sisi
        print(f"Keliling yang didapatkan: {keliling}")
    else:
        print("Kesalahan dalam penginputan")

def persegiPanjang():
    print("===Rumus persegi panjang===\n1. Luas\n2. Keliing")
    rumus = int(input("\nPilih rumus: "))
    if rumus == 1:
        panjang = int(input("Masukkan panjang : "))
        lebar = int(input("Masukkan lebar :"))
        luas = panjang * lebar
        print(f"Luas yang didapatkan : {luas}")
    elif rumus == 2:
        panjang = int(input("Masukkan panjang : "))
        lebar = int(input("Masukkan lebar :"))
        keliling = 2 * (panjang + lebar)
        print(f"Keliling yang didapatkan : {keliling}")
    else:
        print("Kesalahan dalam penginputan")

def lingkaran():
    print("===Rumus lingkaran===\n1. Luas\n2. Keliing")
    rumus = int(input("\nPilih rumus: "))
    if rumus == 1:
        jariJari = int(input("Masukkan jari-jari: "))
        luas = 3.14 * (jariJari ** 2)
        print(f"Luas yang didapatkan: {luas}")
    elif rumus == 2:
        jariJari = int(input("Masukkan jari-jari: "))
        keliling = 2 * 3.12 * jariJari
        print(f"Keliling yang didapatkan : {keliling}")
    else :
        print("Kesalahan dalam penginputan")

print('''===========Bangun Datar===========
1. Persegi
2. Persegi panjang
3. Lingkaran''')
bangunDatar = str(input("Pilih: "))
if bangunDatar.lower() == "1" or bangunDatar.lower() == "persegi":
    persegi()
elif bangunDatar.lower() == "2" or bangunDatar.lower() == "persegi panjang":
    persegiPanjang()
elif bangunDatar.lower() == "3" or bangunDatar.lower() == "lingkaran":
    lingkaran()
else:
    print("Kesalahan dalam penginputan")
