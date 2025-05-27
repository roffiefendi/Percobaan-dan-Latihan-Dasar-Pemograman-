#include <iostream>
using namespace std;

void prosesLogin(string user, string pass)
{
    string username = "admin";
    string password = "1234";

    if (user == username && pass == password)
    {
        cout << "Selamat, Anda Berhasil Login" << endl;
    }
    else
    {
        cout << "Mohon Maaf, Login Tidak Berhasil" << endl;
    }
}

int main()
{
    string inputUser, inputPass;

    cout << "Masukkan Username : ";
    cin >> inputUser;

    cout << "Masukkan Password : ";
    cin >> inputPass;

    prosesLogin(inputUser, inputPass);

    system("pause");
    return 0;
}
