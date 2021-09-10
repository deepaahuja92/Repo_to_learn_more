#include<iostream>
#include<set>
using namespace std;
void ceiling(int *arr,int n){
    int i;
    set<int>s;
    int res[n];
    for(i=n-1;i>=0;i--){
        auto it=s.upper_bound(arr[i]);
        if(it!=s.end())res[i]=*it;
        else res[i]=-1;
        s.insert(arr[i]);
    }
    for(i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
}
int main()
{
    int arr[6]={100,50,30,60,55,32};
    ceiling(arr,6);
    return 0;
}