#include <iostream>
using namespace std;

double tinggi;
double berat;
double bmi;

int main()
{
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;

    int tinggi_cm;
    cout << "Masukkan tinggi badan Anda (cm): ";
    cin >> tinggi_cm;

    tinggi = tinggi_cm / 100.0;

    bmi = berat / (tinggi * tinggi);


    int bmi_int = static_cast<int>(bmi);
    cout << endl << "BMI Anda adalah: " << bmi_int << " Kg" << endl;

    if (bmi < 18.5)
    {
        cout << "Anda berada dalam kategori: Berat Badan Kurang)." << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        cout << "Anda berada dalam kategori: Berat Badan Ideal." << endl;
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        cout << "Anda berada dalam kategori: Berat Badan Lebih." << endl;
    }
    else if (bmi >= 30 && bmi < 39,9)
    {
        cout << "Anda berada dalam kategori: Gemuk." << endl;
    }
    else
    {
        cout << "Anda berada dalam kategori: Sangat Gemuk." << endl;
    }

    int berat_ideal = 1;
    switch (berat_ideal)
    {
        case 1:
            cout << endl << "Kategori berat badan sesuai dengan standar BMI yang telah ditetapkan." << endl;
            cout << "Kurang dari 19: Berat Badan Kurang " << endl;
            cout << "19 - 25: Berat Badan Ideal" << endl;
            cout << "25 - 30: Berat Badan Lebih" << endl;
            cout << "30 - 39: Gemuk" << endl;
            cout << "Di atas 40: Sangat Gemuk" << endl;
            break;

    }

    return 0;
}
