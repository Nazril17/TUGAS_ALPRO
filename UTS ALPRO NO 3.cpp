#include <iostream>
using namespace std;

double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Tidak bisa membagi dengan nol" << endl;
        return 0;
    }
}

int main() {
    int pilihan;
    double operand1, operand2, hasil;
    string operasi;

    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> operand1;

    cout << "Masukkan angka kedua: ";
    cin >> operand2;

    switch (pilihan) {
        case 1:
            hasil = tambah(operand1, operand2);
            operasi = "Penjumlahan";
            break;
        case 2:
            hasil = kurang(operand1, operand2);
            operasi = "Pengurangan";
            break;
        case 3:
            hasil = kali(operand1, operand2);
            operasi = "Perkalian";
            break;
        case 4:
            hasil = bagi(operand1, operand2);
            operasi = "Pembagian";
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            return 1;
    }

    cout << "Hasil dari " << operasi << " untuk " << operand1 << " dan " << operand2 << " adalah " << hasil << endl;

    return 0;
}
