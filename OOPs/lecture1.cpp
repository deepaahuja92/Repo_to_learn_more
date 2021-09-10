//Class-->A data type with functions
//Objects-->Variables
#include<iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img;
    public:
    void print()
    {
        cout<<real<<" "<<"+"<<img<<"i";

    }
    Complex(int r,int i)
    {
        real=r;
         img=i;
    }
};
int main()
{
   Complex C1(10,15);
     C1.print();
   return 0;
}