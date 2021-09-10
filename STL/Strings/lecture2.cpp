#include<iostream>
using namespace std;
void patsearch(string txt,string pat){
    int pos=txt.find(pat);
    while(pos!=string::npos){
        cout<<pos<<" ";
        pos=txt.find(pat,pos+1);
    }
}
int main(){

}