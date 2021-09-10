#include<iostream>
#include<string>
using namespace std;
/*int main()
{
    int x=10;
    int *ptr;
    ptr=&x;
    cout<<*ptr<<" ";
    cout<<ptr<<" ";
    return 0;
}*/
/*int main()
{
    int x=10;
    int *ptr=&x;
    x=x+30;
    cout<<*ptr<<" ";
    *ptr=*ptr+40;
    cout<<*ptr<<" ";
    return 0;
}*/
/*int main()
{
    int *p1;
    cout<<*p1<<" ";
    cout<<pi<<" ";
    return 0;
}*/
/*int main()
{
    int *p1;
    double *p2;
    string *p3;
    cout<<sizeof(p1)<<" ";
    cout<<sizeof(p2)<<" ";
    cout<<sizeof(p3)<<" ";
    return 0;
}*/
//APPLICATIONS
//CHANGING PASSED PARAMETERS
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int x=10;
    int y=20;
    swap(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}
//2)PASSING LARGE OBJECTS AND AVOIDING COPY OF OBJECTS
/*void processvector(vector<int> *v)
{

}
int main()
{
    for(i=0;i<1000;i++)
     v.pushback(i);
     processvector(v);
}*/
//IN C WE DON'T HAVE C
/*int main()  
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr; // or this can also be written as *ptr=&arr[0];
    cout<<*(ptr+2);
    return 0;
}*/