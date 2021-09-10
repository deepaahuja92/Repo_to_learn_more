//SORT ELEMENTS BY FREQUENCY
#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)return a.first<b.first;
    return a.second>b.second;
}
void sortByFrequency(int a[],int n)
{
    unordered_map<int,int>m;
    int i,j;
    for(i=0;i<n;i++){
        m[a[i]]++;
    }
    vector<pair<int,int>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),myCmp);
     i=0;
    for(auto x:v){
        for(j=0;j<x.second;j++){
            a[i++]=x.first;
        }
    }
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
  int a[5]={10,10,20,30,40};
  sortByFrequency(a,5);
  return 0;
}