#include <iostream>
using namespace std;


int main() {
    int n,k;
    cin>>n;
    int arr[n];// 왜 오류로 잡히는 지 모르겠지만, 컴파일에는 문제 x

    for(int i =0;i<n;++i){
        cin>>k;
        arr[i]=k;
    }
    for(int j=n-1; j>=0;--j)
    //배열은 zero부터 시작이기에 초기값을 생각 잘하자
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}