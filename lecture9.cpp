//Jump statements in c++
/**
 * continue
 * break
 * goto 
 * return
 */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        goto label1;
    }
    else 
    goto label2;
    label1:
    cout<<"Even";
    return 0;
    label2:
    cout<<"Odd";
    return 0;
}