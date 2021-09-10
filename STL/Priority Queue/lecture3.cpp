//print k largest elements of the array
//approach-->make a min heap of first 3 elements and if greater element is find return the top of the element
#include<iostream>
#include<queue>
using namespace std;
void print_k(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>>que(arr,arr+k);
    for(int i=k+1;i<n;i++){
        if(arr[i]>que.top()){
            que.pop();
            que.push(arr[i]);
        }
    }
    while(que.empty()==false){
        cout<<que.top()<<" ";
        que.pop();
    }
}
int main()
{
  int arr[7]={1,23,12,9,30,2,50};
  print_k(arr,7,3);
  return 0;
}