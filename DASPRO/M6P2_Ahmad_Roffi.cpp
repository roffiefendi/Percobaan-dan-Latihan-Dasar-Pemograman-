#include <iostream>
using namespace std;

int main() {

    char pilih = 'y';
    int tahun_lahir;

    while(pilih=='y')
    {
        cout<<"tahun lahir anda : ";
        cin>>tahun_lahir;
        cout<<"usia anda saat ini"<<2023 - tahun_lahir<<"tahun"<<endl;

        cout<<"apakah anda ingin mengulang?";
        cin>>pilih;
        system("cls"); // untuk membersihkan layar
    }


    system("pause");
    return 0;
}
