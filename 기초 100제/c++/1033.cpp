#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<uppercase<<hex<<a;
    //std::uppercase, std::nouppercase는 대소문자 관련
    //특정 진법 표현방법 사용을 원하면 
    // std::showbase, std::showpos || std::noshowbase, std::noshowpos
}