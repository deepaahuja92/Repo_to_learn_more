#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int i,a[8]={15,10,18,12,4,6,2,8},a1[10],great;
     s.push(0);
     cout<<"-1"<<" ";
    for(i=1;i<8;i++)
    {
      while (s.empty()==false&&a[s.top()]<=a[i])s.pop();
      great=s.empty()?(-1):a[s.top()];
     // cout<<"i-s.top()"<<(i-s.top());
      cout<<great<<" ";
      s.push(i);
    }
    return 0;
}