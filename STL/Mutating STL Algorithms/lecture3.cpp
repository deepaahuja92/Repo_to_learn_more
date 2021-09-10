//knapsack Problem
//using the concept of value per unit of weight
#include<iostream>
#include<algorithm>
using namespace std;
bool myCmp(pair<int,int>a,pair<int,int>b){
    double r1=(double)a.first/a.second;
    double r2=(double)b.first/b.second;
    return r1>r2;
}
int knapsack_solution(int w,pair<int,int>a[],int n)
{
    int i;
    double res=0.0;
    sort(a,a+3,myCmp);
    for(i=0;i<n;i++){
        //cout<<res<<" ";
        if(w>=a[i].second)
        {
            res+=a[i].first;
            w-=a[i].second;
        }
        else
        {
           res+=a[i].first*((double)w/a[i].second);
           break;
        }
    }
    //cout<<endl;
    return res;
}
int main()
{
  pair<int,int>a[3]={{120,30},{100,20},{60,10}};
  cout<<knapsack_solution(50,a,3);
  return 0;
}