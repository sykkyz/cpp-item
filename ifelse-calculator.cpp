#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char operasi;

    cout << "PROGRAM KALKULATOR SEDERHANA \n \n";
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan operator: ";
    cin >> operasi;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    if (operasi == '+')
    {
        hasil = a + b;
        cout << "Hasil = " << hasil << endl;
    }
    else if (operasi == '-')
    {
        hasil = a - b;
        cout << "Hasil = " << hasil << endl;
    }
    else if (operasi == '*')
    {
        hasil = a * b;
        cout << "Hasil = " << hasil << endl;
    }
    else if (operasi == '/')
    {
        hasil = a / b;
        cout << "Hasil = " << hasil << endl;
    }
    else
    {
        cout << "Operator yang anda masukkan salah. \n" <<endl;
    }
    
    cout << endl;
    cin.get();
    return 0;
}
