#include <iostream>
using namespace std ;

int main ()
{
    int n;
    //Jumlah array
    cout << "Masukkan jumlah elemen array yang akan dimasukkan: ";
    cin >> n;

    int array [n];

    //Masukkan nilai ke dalam array
    for(int i=0; i < n; i++)
    {
    cout << "Masukkan elemen ke-" << i + 1 << ": ";
    cin >> array [i];
    }

    //Mencari integer terbesar
    int max = array [0];
    for (int i=1; i < n; i ++){
        if (array [i] > max)
        {
            max = array [i];
        }
    }
    cout << "Nilai Terbesar yang ada didalam array adalah: " << max << endl;

    int cari;
    cout << "Masukkan angka yang ingin dicari: " << endl;
    cin >> cari;

    bool found = false;
    for (int i = 0; i < n; i++)
    if (array [i] == cari)
    {
        cout << "Angka " << cari << " Ditemukan pada indeks ke-" << i << endl;
        found = true;
        break;
    }

    if (!found)
    {
        cout << "Maaf angka " << cari << " Tidak Ditemukan" << endl;
        cout << "SILAHKAN ULANG KEMBALI." << endl;
    }
    return 0;
}
