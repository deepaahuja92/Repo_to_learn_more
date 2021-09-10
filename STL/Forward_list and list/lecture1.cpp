#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
 forward_list<int>l={10,15,20};
 l.push_front(5);
 l.push_front(3);
 l.pop_front();
 auto it=l.insert_after(l.begin(),10);//returns an iterator pointing to the last element inserted
 it=l.insert_after(it,{2,3,5});
 it=l.emplace_after(it,40);
 it=l.erase_after(it,l.end());//returns an iterator pointing to the element after the last element
  for(int x:l)
    cout<<x<<" ";
 return 0;
}
//assign function is used to assign new values
//l.assign({10,20,30,10});
//l.remove(10); It removes all the 10
//l2.assign(l1.begin(),l1.end);
//l2.assign(5,10)-->five values equal to 0
//clear,empty,reverse,merge()-->l1 merges all the elements of l2 and then l2 becomes empty
