#include <iostream>
using namespace std;

struct Zodiak {
string nama;
int  tanggalAwal, bulanAwal;
int tanggalAkhir, bulanAkhir;
};

//Fungi untuk menampilkan Zodiak
void isiDataZodiak (Zodiak arr [], int size) {
    arr [0] = {"CAPRICORN", 22, 12, 19, 1};
    arr [1] = {"AQUARIUS", 20, 1, 18, 2};
    arr [2] = {"PISCES", 19, 2, 20, 3};
    arr [3] = {"ARIES", 21, 3, 19, 4};
    arr [4] = {"TAURUS", 20, 4, 20, 5};
    arr [5] = {"GEMINI", 21, 5, 20, 6};
    arr [6] = {"CANCER", 21, 6, 22, 7};
    arr [7] = {"LEO", 23, 7, 22, 8};
    arr [8] = {"VIRGO", 23, 8, 22, 9};
    arr [9] = {"LIBRA", 23, 9, 22, 10};
    arr [10] = {"SCORPIO", 23, 10, 21, 11};
    arr [11] = {"SAGITARIUS", 22, 11, 21, 12};
}

//fungsi untuk menampilkan zodiak sesuai tangal lahir
void tampilkanZodiak (Zodiak arr [], int size, int tanggal, int bulan) {
    for (int i = 0; i < size; i++) {
        if ((bulan == arr [i] . bulanAwal && tanggal >= arr [i] . tanggalAwal) ||
            (bulan == arr [i] . bulanAkhir && tanggal <= arr [i] . tanggalAkhir)) {
                cout << "Zodiak Kamu Adalah: " << arr [i] . nama << endl;
                return;
            }
    }
    //Jika Tidak Ada(tidak ditemukan)
    cout << "Zodiak tidak ditemukan" << endl;
    cout << "Coba Ulang Kembali." << endl;
}

int main () {
    const int JUMLAH_ZODIAK = 12;
    Zodiak daftarZodiak [JUMLAH_ZODIAK];

    //Isi Data Zodiak
    isiDataZodiak(daftarZodiak,JUMLAH_ZODIAK);

    int hari, bulan, tahun;

    //Input Tanggal Lahir
    cout << "Masukkan Tanggal Lahir: ";
    cin >> hari;
    cout << "Masukkan Bulan Lahir: ";
    cin >> bulan;
    cout << "Masukkan Tahun Lahir: ";
    cin >> tahun;

    //Menampilkan tanggal lahir
    cout << "Tanggal lahir Kamu: " << hari << "-" << bulan << "-" << tahun << endl;

    //Menampilkan Zodiak
    tampilkanZodiak (daftarZodiak,JUMLAH_ZODIAK, hari, bulan);

    return 0;
}
