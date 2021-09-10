//TRY,THROW AND CATCH IN CPP
#include<iostream>
#include <string>
using namespace std;
/*int main()
{
    int x,y;
    cin>>x>>y;
    try
    {
         if(y==0) 
         throw 0;
         cout<<"Result is "<<x/y;
    }
    catch(int x)
    {
         cout<<"Divisor is zero";
    }
    
    return 0;
}*/
int sum(int *a,int n)
{
    int i,sum=0;
    if(n==0)
    throw string("array size is zero");
    for(i=0;i<n;i++)
    sum+=*(a+i);
    return sum/n;
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    //int res=(arr,n);
    try
    {
          int res=sum(arr,n);
          cout<<res;
    }
    catch(string &x)//catch(...) are used to deal with the data type which is left in catch
    {
      cout<<x;
    }
    return 0;
}