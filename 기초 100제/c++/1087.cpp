#include <iostream>
using namespace std;


int main() {
    int a,sum=0;
    cin>>a;
    for(int i=1;sum<a;++i){
        sum+=i;
        if(sum>=a){
            cout<<sum;
            break;
        }
    }

    return 0;
}