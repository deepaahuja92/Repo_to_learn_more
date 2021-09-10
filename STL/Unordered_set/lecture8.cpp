//SUBARRAY WITH 0 SUM
//create an ordered set
#include<bits/stdc++.h>
using namespace std;
bool isSum(int a[],int n)
{
    unordered_set<int>s;
    int i,prefix_sum=0;
    for(i=0;i<n;i++){
        prefix_sum+=a[i];
        if(s.find(prefix_sum)!=s.end())return true;
        else if(prefix_sum==0)return true;
        s.insert(prefix_sum);
    }
    return false;
}
int main()
{
  int a[6]={4,5,8,4,3,-1};
  cout<<isSum(a,6);
  return 0;
}