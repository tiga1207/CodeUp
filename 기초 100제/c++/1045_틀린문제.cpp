#include <iostream>
#include<iomanip>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl
        <<a-b<<endl
        <<a*b<<endl
        <<a/b<<endl
        <<a%b<<endl
        <<fixed<<setprecision(2)<<float(float(a)/float(b));
        //fixed를 사용하지 않으니 1.00이 아닌 1이라는 값이 출력됨.

    return 0;
}