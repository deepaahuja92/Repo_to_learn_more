#include<iostream>
#include<vector>
using namespace std;
vector<int> getsmaller(int *a,int b,int c)
{
    vector<int>res;
    for(int i=0;i<b;i++)
    {
        if(a[i]<c)
        {
            res.push_back(a[i]);
        }
    }
    return res;
}
int main()
{
    int a[]={10,5,30,40,20};
    vector<int>res = getsmaller(a,5,25);
    for(int x:res)cout<<x<<" ";
    return 0;
}