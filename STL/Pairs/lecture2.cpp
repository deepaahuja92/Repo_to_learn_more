#include<iostream>
#include<bits/stdc++.h>
#include<utility>
using namespace std;
void sort_char(int *a,char *b,int n)
{
    int i;
    pair<int,char> pa[n];
     for(i=0;i<n;i++){
      pa[i]={a[i],b[i]};
    }
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";
}
int main()
{
   int a[5]={1,2,3,4,5};
   char b[5]={'a','b','c','d','e'};
   int n=5;
   sort_char(a,b,n);
   return 0;
}
//returning a pair from a function std::(X,Y);