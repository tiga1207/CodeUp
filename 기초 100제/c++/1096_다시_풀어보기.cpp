#include <iostream>
using namespace std;


int main() {
    int n,x,y;
    int arr[20][20]={};
    cin>>n;

    for (int i=1;i<=n;++i)
    {
        cin>>x>>y;
        arr[x][y]=1;
    }
    for(int j=1;j<=19;++j){
        for(int k=1;k<=19;++k){
            cout<<arr[j][k]<<" ";
        }
        cout<<'\n';
    }
   



    return 0;
}