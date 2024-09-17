#include <iostream>
using namespace std;

int main () {
    int Angka1, Angka2, Angka3, AngkaTerbesar;

    //Memasukkan Tiga Angka
    cout << "Masukkan Angka Pertama: ";
    cin >> Angka1;

    cout << "Masukkan Angka Kedua: ";
    cin >> Angka2;

    cout << "Masukkan Angka Ketiga: ";
    cin >> Angka3;

    //Mencari Angka Terbesar menggunakan If else
    if (Angka1 >= Angka2 && Angka1 >= Angka3) {
        AngkaTerbesar = Angka1;
    } else if (Angka2 >= Angka1 && Angka2 >= Angka3) {
        AngkaTerbesar = Angka2;
    } else if (Angka3 >= Angka2 && Angka3 >= Angka1) {
        AngkaTerbesar = Angka3;
    }

    //Menampilkan Hasil
    cout << "Angka Terbesar Adalah: " << AngkaTerbesar << endl;

    return 0;
}
