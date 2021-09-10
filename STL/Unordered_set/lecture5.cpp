//FIND INTERSECTION OF TWO ARRAYS
#include<iostream>
#include<unordered_set>
using namespace std;
void search_for_pair(int a[],int a2[],int n,int m)
{
    unordered_set<int>s;
    int i;
    for(i=0;i<n;i++){
         s.insert(a2[i]);
    }
    for(i=0;i<m;i++){
       if(s.find(a[i])==s.end());
       else cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={3,2,8,15,-8};
    int a2[3]={3,2,-8};
    search_for_pair(a,a2,3,5);
    return 0;
}