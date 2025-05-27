#include <iostream>
using namespace std;

int main() {
    int i,j,jml;

    cout<<"masukkan jumlah perulangan : ";
    cin>>jml;

    // Menampilkan simulasi perubahan nilai J
    for (i=1; i<=jml; i++){
        for(j=1; j<=jml; j++){
           cout<<j<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Menampilkan segitiga siku siku kanan
    for (i=1; i<=jml; i++){
        for(j=jml; j>=1; j--){
            if(j<=i)
               cout<<"* ";
            else
               cout<<"- ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Menampilkan sgitiga siku siku kiri
    for (i=1; i<=jml; i++){
        for(j=1; j<=jml; j++){
            if(j<=i)
               cout<<"* ";
            else
               cout<<"- ";
        }
        cout<<endl;
    }
    cout<<endl;

system ("pause");
return 0;
}