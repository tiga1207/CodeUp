#include <iostream>
using namespace std;


int main() {
    int a,b,c,result;
    cin>>a>>b>>c;
    result= (a<b) ? ((a<c) ? a:c) : ((b<c) ? b:c);
    
    cout<<result;


    return 0;
}