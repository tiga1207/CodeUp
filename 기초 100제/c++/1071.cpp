#include <iostream>
using namespace std;


int main() {
    int k;
    for(int i=0;;++i){
        cin>>k;
        if(k!=0){
        cout<<k<<endl;
        }
        else{
            break;
        }
    }

    //  �ٸ� ���
    /*
    while(cin>>k){
        if(k==0){break;}
        cout<<k<<endl;
    }

*/
    return 0;
}