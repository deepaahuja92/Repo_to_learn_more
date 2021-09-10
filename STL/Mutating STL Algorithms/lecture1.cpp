//sorting in c++
#include<iostream>
#include<algorithm>
bool cmp(int a,int b){
    return a>b;
}
using namespace std;
int main()
{
    int arr[5]={5,9,8,6,7},i;
    sort(arr,arr+5,cmp);
    for(i=0;i<5;i++)cout<<arr[i]<<" ";
    return 0;
}