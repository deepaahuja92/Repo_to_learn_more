//CHOCOLATE PROBLEM
#include<bits/stdc++.h>
using namespace std;
int minDiff(int a[],int n,int m)
{
    int res=a[m-1]-a[0];
    if(m>n)return -1;
    sort(a,a+n);
    for(int i=0;(i+m-1)<n;i++){
        res=min(res,a[i+m-1]-a[i]);
    }
    return res;
}
int main()
{
  int a[7]={2,3,4,7,9,12,56};
  cout<<minDiff(a,7,3)<<endl;
  return 0;
}