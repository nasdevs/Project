#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int bangun_datar;
    cout<<"Daftar bangun datar"<<endl;
    cout<<"==================="<<endl;
    cout<<"1. persegi"<<endl;
    cout<<"2. Persegi Panjang"<<endl;
    cout<<"3. Segitiga"<<endl;
    cout<<"Pilih salah satu dari daftar diatas: ";
    cin>>bangun_datar;

    if(bangun_datar == 1) {
        int rumus_persegi;
        cout<<"Daftar rumus-rumus persegi"<<endl;
        cout<<"=========================="<<endl;
        cout<<"1. Luas"<<endl;
        cout<<"2. Keliling"<<endl;
        cout<<"3. Diagonal"<<endl;
        cout<<"Pilih salah satu dari rumus diatas: ";
        cin>>rumus_persegi;

        if(rumus_persegi == 1) {
            int sisi, luas;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan sisi: ";
            cin>>sisi;
            cout<<"============================"<<endl;

            luas = sisi*sisi;
            cout<<"Luas yang didapatkan: "<<luas<<endl;
            return 0;
        }

        else if(rumus_persegi == 2) {
            int sisi, keliling;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan sisi\t\t: ";
            cin>>sisi;
            cout<<"============================"<<endl;

            keliling = 4*sisi;
            cout<<"Keliling yang didapatkan: "<<keliling<<endl;
            return 0;
        }
        
        else if(rumus_persegi == 3) {
            int sisi, diagonal;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan sisi\t\t: ";
            cin>>sisi;
            cout<<"============================"<<endl;
            
            diagonal = sisi*sqrt(2);
            cout<<"Keliling yang didapatkan: "<<diagonal<<endl;
            return 0;
        }

        else {
            cout<<"Kesalahan dalam penginputan"<<endl;
        }
    }

    else if(bangun_datar == 2) {
        int rumus_persegi_panjang;
        cout<<"Daftar rumus-rumus persegi panjang"<<endl;
        cout<<"=================================="<<endl;
        cout<<"1. Luas"<<endl;
        cout<<"2. Keliling"<<endl;
        cout<<"3. Diagonal"<<endl;
        cout<<"Pilih salah satu dari rumus diatas: ";
        cin>>rumus_persegi_panjang;

        if(rumus_persegi_panjang == 1) {
            int panjang, lebar, luas;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan panjang\t\t: ";
            cin>>panjang;
            cout<<"Masukkan lebar\t\t: ";
            cin>>lebar;
            cout<<"============================"<<endl;
            
            luas = panjang*lebar;
            cout<<"Luas yang didapatkan: "<<luas<<endl;
            return 0;
        }

        else if(rumus_persegi_panjang == 2) {
            int panjang, lebar, keliling;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan panjang\t\t: ";
            cin>>panjang;
            cout<<"Masukkan lebar\t\t: ";
            cin>>lebar;
            cout<<"============================"<<endl;
            
            keliling = 2*(panjang*lebar);
            cout<<"Keliling yang didapatkan: "<<keliling<<endl;
            return 0;
        }

        else if(rumus_persegi_panjang == 3) {
            int panjang, lebar, diagonal;
            cout<<"Masukkan sesuai yang diminta"<<endl;
            cout<<"============================"<<endl;
            cout<<"Masukkan panjang\t\t: ";
            cin>>panjang;
            cout<<"Masukkan lebar\t\t: ";
            cin>>lebar;
            cout<<"============================"<<endl;
            
            diagonal = sqrt(pow(panjang, 2) + pow(lebar, 2));
            cout<<"Diagoanl yang didapatkan: "<<diagonal<<endl;
            return 0;
        }
    }
    else {
        cout<<"Dak ada didaftar"<<endl;
    }
    return 0;
}
