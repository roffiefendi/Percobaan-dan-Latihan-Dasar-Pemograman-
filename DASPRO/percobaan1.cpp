#include <iostream>
using namespace std;

int main() {
    
    int bil;

    cout<<"Masukkan sebuah Bilangan : ";
    cin>>bil;

    if (bil >=0){
        cout<<bil<<" adalah bilangan POSITIF"<<endl;
    } else {
        cout<<bil<<" adalah bilangan NEGATIF"<<endl;
    }
    


    system("pause");
    return 0;
}
