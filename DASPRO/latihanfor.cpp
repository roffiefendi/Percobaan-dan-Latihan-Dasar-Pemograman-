#include <iostream>
using namespace std;

int main(){

    int i,j,jml;

    cout<<"masukkan jumlah perulangan : ";
    cin>>jml;

for(i=1;i<=jml;i++){
    cout<<i<<" ";
    for(j=1;j<=jml;j++){
        if(j<=i){
            cout<<"* ";
        }
        else{
            cout<<"-";
        }
    }
    cout<<endl;
}

return 0;
}

