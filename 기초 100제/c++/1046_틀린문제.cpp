#include <iostream>
#include<iomanip>
using namespace std;


int main() {
    long long int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c<<endl 
        <<fixed<<setprecision(1)<<float(a+b+c)/float(3);
    return 0;
}