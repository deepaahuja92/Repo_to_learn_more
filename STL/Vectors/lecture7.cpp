#include<bits/stdc++.h>
using namespace std;
void sort(int *roll,int *marks,int n)
{
    pair<int,int> pa[n];
    int i;
    for(i=0;i<n;i++)
    {
        pa[i]={marks[i],roll[i]};
    }
    sort(pa,pa+n);
    for(i=n-1;i>=0;i--)
    cout<<pa[i].second<<" "<<pa[i].first<<endl;
}
int main()
{
    int roll[4]={101,108,103,105};
     int marks[4]={70,80,40,90};
     sort(roll,marks,4);
     return 0;
}