#include<iostream>
using namespace std;
template<typename T>
T max_element_of_array(T arr[],int n)
{
    int res=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>res)
        res=a[i];
    }
    return res;
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<max_element_of_array<int>(arr,6);
    return 0;
}  
