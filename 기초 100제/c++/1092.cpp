#include <iostream>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=1;i<=a*b*c;i++)
    {
        if(i%a==0 && i%b==0 && i%c == 0){
            cout<<i;
            break;
        }
    }

    return 0;
}