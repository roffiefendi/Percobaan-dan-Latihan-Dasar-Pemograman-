#include <iostream>
using namespace std;

int main (){
    int i,j,k,jml;

    cout << "Masukan jumlah perulangan : ";
    cin >> jml;

    for (i=1;i<=jml;i++){
        for (j=jml;j>=1;j--){
            if (j<=i)
            cout << "* ";
            else
            cout << "- ";
        }
        for (k=1;k<=jml-1;k++){
            if (k<i)
            cout << "* ";
            else
            cout << "- ";
        }
        cout << endl;
    }
    cout << endl;

    system ("pause");
    return 0;
}