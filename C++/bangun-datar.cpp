#include <iostream>
#include <cmath>
#include <math.h>
#include <unistd.h>
#define PHI 3.14
using namespace std;
// Nasrullah, github.com/nasdevs
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

void luas(float hasil) {
    cout << "Luas yang didapatkan : " << hasil << endl;
}

void keliling(float hasil) {
    cout << "Keliing yang didapatkan : " << hasil << endl;
}

void diagonal(float hasil) {
    cout << "Diagonal yang didapatkan : " << hasil << endl;
}

void salahInput() {
    cout << "Terdapat kesalahan dalam penginputan" << endl;
}

int main() {
    string bangunDatar;
    char ulang;

    do {
        menuBangunDatar();
        cout << "Pilih : "; getline(cin, bangunDatar);

        // Persegi
        if (bangunDatar == "1" || bangunDatar == "persegi") {
            menuRumusPersegi();
            string rumusPersegi;
            cout << "Pilih : "; cin >> rumusPersegi;

            // Luas
            if (rumusPersegi == "1" || rumusPersegi == "luas") {
                int sisi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung luas persegi" << endl;
                cout << "Masukkan sisi : "; cin >> sisi;

                hasil = sisi * sisi;
                luas(hasil);
            }
            
            // Keliling
            else if (rumusPersegi == "2" || rumusPersegi == "keliling") {
                int sisi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung keliling persegi" << endl;
                cout << "Masukkan sisi : "; cin >> sisi;

                hasil = 4 * sisi;
                keliling(hasil);
            }

            // Diagonal
            else if (rumusPersegi == "3" || rumusPersegi == "diagonal") {
                int sisi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung diagonal persegi" << endl;
                cout << "Masukkan sisi : "; cin >> sisi;

                hasil = sisi * sqrt(2);
                diagonal(hasil);
            }

            else {
                salahInput();
            }
        }

        // Persegi Panjang
        else if (bangunDatar == "2" || bangunDatar == "persegi panjang") {
            menuRumusPersegiPanjang();
            string rumusPersegiPanjang;
            cout << "Pilih : "; cin >> rumusPersegiPanjang;

            // Luas
            if (rumusPersegiPanjang == "1" || rumusPersegiPanjang == "luas") {
                int panjang, lebar;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung luas persegi panjang" << endl;
                cout << "Masukkan panjang : "; cin >> panjang;
                cout << "Masukkan lebar   : "; cin >> lebar;

                hasil = panjang * lebar;
                luas(hasil);
            }
            
            // Keliling
            else if (rumusPersegiPanjang == "2" || rumusPersegiPanjang == "keliling") {
                int panjang, lebar;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung keliling persegi panjang" << endl;
                cout << "Masukkan panjang : "; cin >> panjang;
                cout << "Masukkan lebar   : "; cin >> lebar;
                
                hasil = 2 * (panjang + lebar);
                keliling(hasil);
            }

            // Diagonal
            else if (rumusPersegiPanjang == "3" || rumusPersegiPanjang == "diagonal") {
                int panjang, lebar;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung diagonal persegi panjang" << endl;
                cout << "Masukkan panjang : "; cin >> panjang;
                cout << "Masukkan lebar   : "; cin >> lebar;
                
                hasil = sqrt(pow(panjang, 2) + pow(lebar, 2));
                diagonal(hasil);
            }

            else {
                salahInput();
            }
        }

        // Segitiga
        else if (bangunDatar == "3" || bangunDatar == "segitiga") {
            // Segitiga, mau dibuatin cabang segitiga lagi seperti
            // segitiga sama sisi, siku siku, sembarang, sama kaki dll
            cout << "Coming soon" << endl;
        }

        // Jajar Genjang
        else if (bangunDatar == "4" || bangunDatar == "jajargenjang") {
            menuRumusJajarGenjang();
            string rumusJajarGenjang;
            cout << "Pilih : "; cin >> rumusJajarGenjang;

            // Luas
            if (rumusJajarGenjang == "1" || rumusJajarGenjang == "luas") {
                int alas, tinggi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung luas Jajar genjang" << endl;
                cout << "Masukkan alas   : "; cin >> alas;
                cout << "Masukkan tinggi : "; cin >> tinggi;

                hasil = alas * tinggi;
                luas(hasil);
            }
            
            // Keliling
            else if (rumusJajarGenjang == "2" || rumusJajarGenjang == "keliling") {
                int sisi1, sisi2;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung keliling jajar genjang" << endl;
                cout << "Masukkan sisi 1 : "; cin >> sisi1;
                cout << "Masukkan sisi 2 : "; cin >> sisi2;

                hasil = 2 * (sisi1 * sisi2);
                keliling(hasil);
            }

            else {
                salahInput();
            }
        }

        // Belah Ketupat
        else if (bangunDatar == "5" || bangunDatar == "belah ketupat" || bangunDatar == "belaketupat") {
            menuRumusBelahKetupat();
            string rumusBelahKetupat;
            cout << "Pilih : "; cin >> rumusBelahKetupat;

            // Luas
            if (rumusBelahKetupat == "1" || rumusBelahKetupat == "luas") {
                int alas, tinggi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung luas belah ketupat" << endl;
                cout << "Masukkan alas   : "; cin >> alas;
                cout << "Masukkan tinggi : "; cin >> tinggi;

                hasil = alas * tinggi;
                luas(hasil);
            }
            
            // Keliling
            else if (rumusBelahKetupat == "2" || rumusBelahKetupat == "keliling") {
                int sisi;
                float hasil;
                cout << "=========================================" << endl;
                cout << "Mwnghitung kelilng belah ketupat" << endl;
                cout << "Masukkan panjang sisi : "; cin >> sisi;

                hasil = 4 * sisi;
                keliling(hasil);
            }

            else {
                salahInput();
            }
        }

        // Trapesium
        else if (bangunDatar == "6" || bangunDatar == "trapesium") {
            cout << "Coming soon" << endl;
        }

        // Lingkarang
        else if (bangunDatar == "7" || bangunDatar == "lingkaran") {
            menuRumusLingkaran();
            string rumusLingkaran;
            cout << "Pilih : "; cin >> rumusLingkaran;

            // Luas
            if (rumusLingkaran == "1" || rumusLingkaran == "luas") {
                float r, hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung luas Lingkaran" << endl;
                cout << "Masukkan jari-jari : "; cin >> r;

                hasil = PHI * pow(r, 2);
                luas(hasil);
            }
            
            // Keliling
            else if (rumusLingkaran == "2" || rumusLingkaran == "keliling") {
                float r, hasil;
                cout << "=========================================" << endl;
                cout << "Menghitung keliling Lingkaran" << endl;
                cout << "Masukkan jari-jari : "; cin >> r;

                hasil = 2 * PHI * r;
                keliling(hasil);
            }
        }
        
        else {
            salahInput();
        }
        
        cout << "\nKembali kemenu utama [Y/N] : ";  cin >> ulang;
        cin.ignore();
    }
    while(ulang == 'Y' || ulang == 'y');
    cout << endl;
    cout << "Program akan dimatikan dalam 3 detik"; sleep(3);
    cout << endl;
    return 0;
}
