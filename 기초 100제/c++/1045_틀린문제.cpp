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
        //fixed�� ������� ������ 1.00�� �ƴ� 1�̶�� ���� ��µ�.

    return 0;
}