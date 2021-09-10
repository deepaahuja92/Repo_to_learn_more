#include<bits/stdc++.h>
using namespace std;
int findLongest(int a[],int n)
{
  sort(a,a+n);
  int i,res=1,curr=1;
  for(i=0;i<n;i++)
  {
     if(a[i]==a[i-1])curr++;
     else{
         res=max(res,curr);
         curr=1;
     }
  }
  return max(res,curr);
}
int main()
{

}