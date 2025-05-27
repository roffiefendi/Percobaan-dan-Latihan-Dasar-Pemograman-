#include <iostream>
using namespace std;

void tambah(int x, int y)
{
    int hasil;

    hasil = x + y;
    cout << "hasil : " << hasil << endl;
}

int main()
{
    int a, b;

    cout << "masukkan bilangan pertama: ";
    cin >> a;
    cout << "masukkan bilangan kedua: ";
    cin >> b;

    tambah(a, b);

    system("pause");
    return 0;
}
