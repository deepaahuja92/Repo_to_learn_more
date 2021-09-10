#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int i;
    int a[8]={5,15,10,8,6,12,9,18};
    int a1[8];
    stack<int>s;
    s.push(7);
    for(i=7;i>=0;i--){
        while (s.empty()==false&&a[s.top()]<=a[i])s.pop();
         int ng=s.empty()?(-1):a[s.top()];
         a1[i]=ng;
         s.push(i);
    }
    for(i=0;i<8;i++)cout<<a1[i]<<" ";
    return 0;
}