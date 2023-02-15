#include <iostream>

using namespace std;

int main()
{
    cout << "==============================" << endl;
    cout << " APLIKASI PENGHITUNG SEGITIGA " << endl;
    cout << "==============================" << endl;

    float a, t, luas, r;
    float Phi = 3.14;

    cout << "Input alas segitiga : ";
    cin >> a;
    cout << "Input tinggi segitiga : ";
    cin >> t;
    cout << endl;

    luas = 0.5 * a * t;

    cout << "Luas segitiga : " << luas << " cm2" << endl;

    cout << "==============================" << endl;
    cout << " APLIKASI PENGHITUNG LINGKARAN " << endl;
    cout << "==============================" << endl;
    cout << "Input jari-jari lingkaran : ";
    cin >> r;

    luas = 3.14 * r * r;

    cout << "Luas lingkaran : " << luas << " cm2" << endl;

    return 0;
}
