//TIME COMPLEXITIES AND PARSING TO FUNCTION
// o(1)-->
// push_back,pop_back,empty,front,back,size,begin,rbegin,cbegin,crbegin,end,rend,cend,crend
//push_back and pop_back can be vary
//insert-->O(n)
//erase->O(n)
//resize->O(n)
//PASSING 
#include<iostream>
#include<vector>
using namespace std;
void fun(const vector<int> &v)//const if purpose is only efficency and not to modify the vector
{
    for(int x:v){
        cout<<x<<" ";
    }
}
int main()
{
    vector<int> v{5,6,7};
    fun(v);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
//EFFICIENT TRANSVERSAL-->USE REFERENCE
