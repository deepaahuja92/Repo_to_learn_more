#include<iostream>//FIND MAXIMUM NUMBER OF DISTINCT ELEMENTS IN A SUBSET OF GIVEN LENGTH
#include<unordered_set>
using namespace std;
int search_for_pair(int a[],int n,int k)
{
    unordered_set<int>s;
    int i;
    for(i=0;i<n;i++){
        s.insert(a[i]);
    }
    int d=s.size();
    if(d>=n/k)return n/k;
    return d;
}
int main()
{
    int a[6]={3,2,1,2,3,1};
    cout<<search_for_pair(a,6,3)<<endl;
    return 0;
}