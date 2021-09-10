//Pairs in C++
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    // pair<int,int>p1(10,20);
    //  pair<int,int>p3;//default value zero
    // p3={10,20};//p3=make_pair(10,20);
    // pair<int,string>p2(20,"GeeksforGeeks");
    // cout<<p1.first<<" "<<p2.second<<" ";
    //COMPARISION OF PAIRS
    pair<int,int>p1(10,20),p2(20,30);
    cout<<(p1==p2)<<" "//both are equal
        <<(p1!=p2)<<" "//opposite of equal equal(lexicographically)
        <<(p1>p2)<<" "//checks only for first
        <<(p1<p2)<<endl;
    return 0;
}