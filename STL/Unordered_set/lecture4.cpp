#include<iostream>
#include<unordered_set>
using namespace std;
bool search_for_pair(int a[],int sum,int n)
{
    unordered_set<int>s;
    int i;
    for(i=0;i<n;i++){
        if(s.find(sum-a[i])==s.end())s.insert(a[i]);
        else return true;
    }
    return false;
}
int main()
{
    int a[5]={3,2,8,15,-8};
    cout<<search_for_pair(a,25,5)<<endl;
    return 0;
}