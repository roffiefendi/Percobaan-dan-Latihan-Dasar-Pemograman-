#include <iostream>
using namespace std;

int main() {
    int a, b, pilihan;

    cout << "Masukkan nilai a : ";
    cin >> a;

    cout << "Masukkan nilai b : ";
    cin >> b;

    cout << "\n1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "\nHasil Penjumlahan : " << a + b << endl;
            break;
        case 2:
            cout << "\nHasil Pengurangan : " << a - b << endl;
            break;
        case 3:
            cout << "\nHasil Perkalian : " << a * b << endl;
            break;
        case 4:
            if(b != 0)
                cout << "\nHasil Pembagian : " << a / b << endl;
            else
                cout << "\nError: Pembagian dengan nol tidak diperbolehkan!" << endl;
            break;
        case 5:
            if(b != 0)
                cout << "\nHasil Modulus : " << a % b << endl;
            else
                cout << "\nError: Modulus dengan nol tidak diperbolehkan!" << endl;
            break;
        default:
            cout << "\nPilihan tidak valid!" << endl;
    }

system("pause");
return 0;
}
