#include<iostream>
using namespace std;
class arraysizezeroexception{ };
class arraysizenegativeexception{ };
int average(int arr[],int n)
{
    if(n==0)throw arraysizezeroexception();
    if(n<0)throw arraysizenegativeexception();
}
int main()
{
 int n;
 cin>>n;
 int *arr=new int[n];
 try
 {
     int res=average(arr,n);
      cout<<res<<endl;
 }
 catch(arraysizezeroexception &e)
 {
      cout<<"Size of array is zero";
 }
 catch(arraysizenegativeexception &e1)
 {
     cout<<"Size of array is less than zero";
 }
 return 0;
}