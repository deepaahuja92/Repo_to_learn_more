//CEILING ELEMENT ON RIGHT
#include <iostream>
#include<bits/stdc++.h>
#include <set>
using namespace std;
void ceiling(int *arr, int n)
{
    int i, j, diff;
    for (i = 0; i < n - 1; i++)
    {
        diff=INT_MAX;
        for (j = i + 1; j < n; j++)
        {
            if(arr[j]>arr[i])diff = min(diff,arr[j]-arr[i]);
        }
        if(diff!=INT_MAX)cout<<arr[i]+diff<<" ";
        else cout<<"-1"<<" ";
    }
}
int main()
{
    int arr[6]={100,50,30,60,55,32};
    ceiling(arr,6);
    return 0;
}