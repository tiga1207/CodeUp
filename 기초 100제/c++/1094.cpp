#include <iostream>
using namespace std;


int main() {
    int n,k;
    cin>>n;
    int arr[n];// �� ������ ������ �� �𸣰�����, �����Ͽ��� ���� x

    for(int i =0;i<n;++i){
        cin>>k;
        arr[i]=k;
    }
    for(int j=n-1; j>=0;--j)
    //�迭�� zero���� �����̱⿡ �ʱⰪ�� ���� ������
    {
        cout<<arr[j]<<" ";
    }

    return 0;
}