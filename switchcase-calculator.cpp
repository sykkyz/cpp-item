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

    switch(operasi)
    {
        case '+': true;
            hasil = a + b;
            cout << "Hasil = " << hasil << endl;
            break;
        case '-': true;
            hasil = a - b;
            cout << "Hasil = " << hasil << endl;
            break;
        case '*': true;
            hasil = a * b;
            cout << "Hasil = " << hasil << endl;
            break;
        case '/': true;
            hasil = a / b;
            cout << "Hasil = " << hasil << endl;
            break;
        default:
            cout << "Operator yang anda masukkan salah. \n" <<endl;
    }
    
    cout << endl;
    cin.get();
    return 0;
}
