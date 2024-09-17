#include <iostream>
using namespace std;

    int main () {
        int Pilihan;
        double Sisi, Panjang, Lebar, Alas, Tinggi;

        cout << "Pilih bangun datar yang akan dihitung luasnya: " << endl;
        cout << "1. Persegi Panjang: " << endl;
        cout << "2. Persegi: " << endl;
        cout << "3. Segitiga: " << endl;
        cout << "Masukkan Pilihan: " << endl;
        cin >> Pilihan;

        switch (Pilihan) {
            case 1:
                cout << "Masukkan Panjang Persegi Panjang: ";
                cin >> Sisi;
                cout << "Luas Persegi Adalah: " << Sisi * Sisi << endl;
                break;
            case 2:
                cout << "Masukkan Panjang Persegi Panjang: ";
                cin >> Panjang;
                cout << "Masukkan Lebar Persegi Panjang: ";
                cin >> Lebar;
                cout << "Luas Persegi Panjang Adalah: " << Panjang * Lebar << endl;
                break;
            case 3:
                cout << "Masukkan Alas Segitiga: ";
                cin >> Alas;
                cout << "Masukkan Tinggi Segitiga: ";
                cin >> Tinggi;
                cout << "Luas Segitiga Adalah: " << 0.5 * Alas * Tinggi << endl;
                break;

            default:
                cout << "Pilihan Tidak Valid" << endl;
            }
    }



