#include <iostream>
using namespace std;

bool cekLogin(string user, string pass)
{
    string username = "admin";
    string password = "1234";

    return (user == username && pass == password);
}

int main()
{
    string inputUser, inputPass;

    cout << "Masukkan Username : ";
    cin >> inputUser;

    cout << "Masukkan Password : ";
    cin >> inputPass;

    bool status = cekLogin(inputUser, inputPass);

    if (status)
    {
        cout << "Selamat, Anda Berhasil Login" << endl;
    }
    else
    {
        cout << "Mohon Maaf, Login Tidak Berhasil" << endl;
    }

    system("pause");
    return 0;
}
