#include <iostream>
using namespace std;


int main() {
    char a ='a';
    char k;
    cin>>k;
    while(1){
        if(k==a){
            cout<<a<<" ";
            break;
        }
        cout<<a<<" ";
        ++a;  
         
    }
    //���ѷ��� ���� Ǫ�� ��
/*
    while(a<=k){
        cout<<a<<" ";
        ++a;
    }
*/
    return 0;
}