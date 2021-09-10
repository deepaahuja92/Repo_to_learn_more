//PURCHASE MAXIMUM ITEMS WITH GIVEN SUM
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int purchase_max_items(int a[],int n,int sum)
{
  int res=0,i;
  priority_queue<int,vector<int>,greater<int>>que(a,a+n);
  for(i=0;i<n;i++){
      if(que.top()>sum)break;
      else{
          sum-=que.top();
          que.pop();
          res++;
      }
  }
  return res;
}
int main()
{
 int a[5]={1,12,5,111,200}; 
 int sum=10;
 cout<<purchase_max_items(a,5,sum)<<endl;
 return 0;
}