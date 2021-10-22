#include <iostream>
#include <cmath>
#include <math.h>
#include <conio.h>
#include <unistd.h>
#include <stdio.h>
using namespace std;

void menuBangunDatar() {
    cout << "===========Daftar bangun datar===========" << endl;
    cout << "1. persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Jajar Genjang" << endl;
    cout << "5. Belah Ketupat" << endl;
    cout << "6. Trapesium" << endl;
    cout << "7. Lingkaran" << endl;
    cout << "=========================================" << endl;
}

void menuRumusPersegi() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus persegi" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "3. Diagonal" << endl;
    cout << "=========================================" << endl;
}

void menuRumusPersegiPanjang() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus persegi panjang" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "3. Diagonal" << endl;
    cout << "=========================================" << endl;
}

void menuRumusSegitiga() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus segitiga" << endl;
    cout << "=========================================" << endl;
    cout << "1. " << endl;
    cout << "2. Keliling" << endl;
    cout << "=========================================" << endl;
 }

void menuRumusJajarGenjang() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus jajar genjang" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "=========================================" << endl;
}

void menuRumusBelahKetupat() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus Belah Ketupat" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "=========================================" << endl;
}

void menuRumusTrapesium() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus Trapesium" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "=========================================" << endl;
}

void menuRumusLingkaran() {
    cout << "=========================================" << endl;
    cout << "Daftar rumus-rumus Lingkaran" << endl;
    cout << "=========================================" << endl;
    cout << "1. Luas" << endl;
    cout << "2. Keliling" << endl;
    cout << "=========================================" << endl;
}

void luas(double hasil) {
    cout << "Luas yang didapatkan : " << hasil << endl;
}

void keliling(double hasil) {
    cout << "Keliing yang didapatkan : " << hasil << endl;
}

void diagonal(double hasil) {
    cout << "Diagonal yang didapatkan : " << hasil << endl;
}

void start(char ulang) {
    cout << "Ingin kembali ke menu?";
    cout << "Pilih [Y/N]";
    cin >> ulang;
}

void salahInput() {
    cout << "Terdapat kesalahan dalam penginputan" << endl;
}

int main() {
    int bangunDatar;
    char ulang;

    menuBangunDatar();
    cout << "Pilih [1/2/3/4/5/6/7] : ";
    cin >> bangunDatar;

    // Persegi
    if(bangunDatar == 1) {
        menuRumusPersegi();
        int rumusPersegi;

        cout << "Pilih [1/2/3]: ";
        cin >> rumusPersegi;

        if(rumusPersegi == 1) {
            double sisi, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung luas persegi" << endl;
            cout << "Masukkan sisi : ";
            cin >> sisi;

            hasil = sisi * sisi;
            luas(hasil);
        }

        else if(rumusPersegi == 2) {
            double sisi, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung keliling persegi" << endl;
            cout << "Masukkan sisi : ";
            cin >> sisi;

            hasil = 4 * sisi;
            keliling(hasil);
        }

        else if(rumusPersegi == 3) {
            double sisi, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung diagonal persegi" << endl;
            cout << "Masukkan sisi : ";
            cin >> sisi;

            hasil = sisi * sqrt(2);
            diagonal(hasil);
        }

        else {
            salahInput();
        }
    }

    // Persegi Panjang
    else if(bangunDatar == 2) {
        menuRumusPersegiPanjang();
        int rumusPersegiPanjang;

        cout << "Pilih [1/2/3] : ";
        cin >> rumusPersegiPanjang;

        if(rumusPersegiPanjang == 1) {
            double panjang, lebar, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung luas persegi panjang" << endl;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;

            hasil = panjang * lebar;
            luas(hasil);
        }

        else if(rumusPersegiPanjang == 2) {
            double panjang, lebar, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung keliling persegi panjang" << endl;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar : ";
            cin >> lebar;
            
            hasil = 2 * (panjang + lebar);
            keliling(hasil);
        }

        else if(rumusPersegiPanjang == 3) {
            double panjang, lebar, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung diagonal persegi panjang" << endl;
            cout << "Masukkan panjang : ";
            cin >> panjang;
            cout << "Masukkan lebar";
            cin >> lebar;
            
            hasil = sqrt(pow(panjang, 2) + pow(lebar, 2));
            diagonal(hasil);
        }

        else {
            salahInput();
        }
    }

    // Segitiga
    else if(bangunDatar == 3) {
        // Segitiga, mau dibuatin cabang segitiga lagi seperti
        // segitiga sama sisi, siku siku, sembarang, sama kaki dll
        }

    // Jajar Genjang
    else if(bangunDatar == 4) {
        menuRumusJajarGenjang();
        int rumusJajarGenjang;

        cout << "Pilih [1/2] : ";
        cin >> rumusJajarGenjang;

        if(rumusJajarGenjang == 1) {
            double alas, tinggi, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung luas Jajar genjang" << endl;
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;

            hasil = alas * tinggi;
            luas(hasil);
        }

        else if(rumusJajarGenjang == 2) {
            double sisi1, sisi2, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung keliling jajar genjang" << endl;
            cout << "Masukkan sisi 1 : ";
            cin >> sisi1;
            cout << "Masukkan sisi 2 : ";
            cin >> sisi2;

            hasil = 2 * (sisi1 * sisi2);
            keliling(hasil);
        }

        else {
            salahInput();
        }
    }

    // Belah Ketupat
    else if(bangunDatar == 5) {
        menuRumusBelahKetupat();
        int rumusBelahKetupat;

        cout << "Pilih [1/2] : ";
        cin >> rumusBelahKetupat;

        if(rumusBelahKetupat == 1) {
            double alas, tinggi, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung luas belah ketupat" << endl;
            cout << "Masukkan alas : ";
            cin >> alas;
            cout << "Masukkan tinggi : ";
            cin >> tinggi;

            hasil = alas * tinggi;
            luas(hasil);
        }

        else if(rumusBelahKetupat == 2) {
            double sisi, hasil;
            cout << "=========================================" << endl;
            cout << "Mwnghitung kelilng belah ketupat" << endl;
            cout << "Masukkan panjang sisi : ";
            cin >> sisi;

            hasil = 4 * sisi;
            keliling(hasil);
        }

        else {
            salahInput();
        }
    }

    // Trapesium
    else if(bangunDatar == 6) {
        // Coming soon
    }

    // Lingkarang
    else if(bangunDatar == 7) {
        menuRumusLingkaran();
        int rumusLingkaran;

        cout << "Pilih [1/2] : ";
        cin >> rumusLingkaran;

        if(rumusLingkaran == 1) {
            double phi = 3.14, r, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung luas Lingkaran" << endl;
            cout << "Masukkan jari-jari : ";
            cin >> r;

            hasil = phi * pow(r, 2);
            luas(hasil);
        }

        else if(rumusLingkaran == 2) {
            double phi = 3.14, r, hasil;
            cout << "=========================================" << endl;
            cout << "Menghitung keliling Lingkaran" << endl;
            cout << "Masukkan jari-jari : ";
            cin >> r;

            hasil = 2 * phi * r;
            keliling(hasil);
        }
    }

    else {
        salahInput();
    }
}
