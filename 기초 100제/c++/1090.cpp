#include <iostream>
#include<math.h>
using namespace std;


int main() {
    long long int a,r,n;
    cin>>a>>r>>n;

    cout<<static_cast<long long int>(a*pow(r,(n-1)));

    return 0;
}