//MEETING THE NUMBER OF MAXIMUM GUESTS
#include<bits/stdc++.h>
using namespace std;
int Meet_Max_Guests(int arr[],int n,int dep[])
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,curr=1,res=1;
    while(i<n&&j<n){
        if(arr[i]<=dep[j])
        {curr++;i++;}
        else curr--;j++;
        res=max(res,curr);
    }
    return res;
}
int main()
{
  int a[3]={900,600,700};
  int b[3]={1000,800,730};
  cout<<Meet_Max_Guests(a,3,b);
  return 0;
}