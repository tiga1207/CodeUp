#include <iostream>
using namespace std;


int main() {
    int a;
    cin>>a;
    if(a>=90){
        cout<<"A";
    }
    else if (a>=70 && a<=89)
    {
        cout<<"B";
    }
    else if (a>=40 && a<=69)
    {
        cout<<"C";
    }
    else if (a>=0 && a<=39)
    {
        cout<<"D";
    }
    return 0;
}