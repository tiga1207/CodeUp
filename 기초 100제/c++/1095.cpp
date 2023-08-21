#include <iostream>
using namespace std;


int main() {
    int n,k,temp=0;

    cin>>n;
    int arr[n]={0,};

    for (int i=0;i<n;++i)
    {
        cin>>k;
        arr[i]=k;
    }

    temp= arr[0];
    
    for (int j=1;j<n;++j)
    {
        if(temp>=arr[j]){
            temp=arr[j];
        }
    }

    cout<<temp;
    

    return 0;
}