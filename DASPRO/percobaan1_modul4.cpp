#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int a,b,c;
    a = 10;
    b = 20;
    cout<<"a="<< a <<"b="<< b <<endl;
    cout<<"setelah ditukar"<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"a="<< a <<"b="<< b <<endl;
getch();
return 0;
}