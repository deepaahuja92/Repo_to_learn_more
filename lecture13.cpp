//arrays
//vectors in c to overcome the problem of size of an array should be known before
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v; //vector<int> v{10,20,30}
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
     for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";
     //for(auto x:v) //int can also be written in place of int
     //cout<<x<<" ";
     return 0;
}
//max function in built to find maximum of two numbers
//*max_element(arr,arr+n) directly finds the maximum element in a given array where n is the size of the array
//IN VECTORS
//*max_element(v.begin(),v.end());
/****************************************************************************************
 #include<numeric>
 int s=0;
 accumulate(arr,arr+n,s);
 ***********************************************************************************/