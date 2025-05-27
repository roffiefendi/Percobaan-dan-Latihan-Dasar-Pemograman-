#include <iostream>
using namespace std;

int main() {
    string username = "admin", password = "1234", temp_username, temp_password;

    cout<<"Masukkan Username : ";
    cin>> temp_username;

    cout<<"Masukkan Password : ";
    cin>> temp_password;

    if (temp_username == username){
        if (temp_password == password){
            cout << "Selamat, Anda Berhasil Login"<<endl;
        } else {
            cout<< "Mohon Maaf, LOgin Tidak Berhasil"<<endl;
        }
    }else {
        cout<<"Mohon Maaf, Login Tidak Berhasil"<<endl;
    }
    system("pause");
    return 0;
    
}