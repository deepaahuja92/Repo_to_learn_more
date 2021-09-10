#include<iostream>
#include<stack>
using namespace std;
//NAIVE APPROACH
// int main()
// {
//     int i,j,span;
//     int a[]={15,13,12,14,16,8,6,4,10,30},a1[10];
//     for(i=0;i<9;i++)
//     {
//         span=0;
//         for(j=i;j>=0;j--){
//            if(a[j]<=a[i])span++;
//            else break;
//         }
//         a1[i]=span;
//     }
//     for(i=0;i<9;i++)cout<<a1[i]<<" ";
//     return 0;
// }
//EFFICIENT APPROACH
//smaller element push into the stack if greater element remove all elements from the stack
int main()
{
    stack<int>s;
    int a[]={15,13,12,14,16,8,6,4,10,30},a1[10];
    s.push(0);
    for(int i=1;i<10;i++){
        while(s.empty()==false&&a[s.top()]<=a[i])s.pop();
        int span=s.empty()?(i+1):(i-s.top());
        cout<<span<<" ";
        s.push(i);
    }
    return 0;
}