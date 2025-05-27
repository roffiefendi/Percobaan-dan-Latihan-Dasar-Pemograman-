#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan sebuah bilangan : ";
    cin >> bilangan;

    if (bilangan >= 0) {
        cout << "Hasil: " << bilangan << endl;
    } else {
        int hasil = bilangan * bilangan;
        cout << "Hasil: " << hasil << endl;
    }
    system("pause");
    return 0;
}
