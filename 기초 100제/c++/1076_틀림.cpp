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
    //무한루프 없이 푸는 법
/*
    while(a<=k){
        cout<<a<<" ";
        ++a;
    }
*/
    return 0;
}