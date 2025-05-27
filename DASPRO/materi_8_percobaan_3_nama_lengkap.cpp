#include <iostream>
using namespace std;

int tambah(int x, int y)
{
    int hasil;

    hasil = x + y;
    cout << "Hasil : " << hasil << endl;
    return hasil;
}

int main()
{
    int a, b, hasil;

    cout << "masukkan bilangan pertama: ";
    cin >> a;
    cout << "masukkan bilangan kedua: ";
    cin >> b;

    hasil = tambah(a, b);
    cout << "Hasil : " << hasil << endl;

    system("pause");
    return 0;
}
