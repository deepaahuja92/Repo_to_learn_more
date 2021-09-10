#include<iostream>
#include<algorithm>
using namespace std;
bool mycmp(int a,int b){
    return a>b;
}
int solution_of_thief(int a[],int n,int k)
{
    int i=0,sum=0;
    sort(a,a+6,mycmp);
    while(k--){
        sum+=a[i];
        i++;
    }
    return sum;
}
int main()
{
    int arr[6]={3,7,2,5,12,30};
    int k=3;
    cout<<solution_of_thief(arr,6,k);
    return 0;
}