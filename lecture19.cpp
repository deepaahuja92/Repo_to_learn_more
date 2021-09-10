//DATA TYPES HAVING FLOAT,INT AND DOUBLE HAVE ALIGNMENT REQUIREMENTS
//A STRUCTURE HAS ALIGNMENT REQUIREMENTS AS IT LARGEST MEMBER REQUIREMENTS
#include<iostream>
using namespace std;
struct s3
{
   char c1;
   char c2;
   double d1;
}__attribute__((packed));

int main()
{
    cout<<sizeof(s3);
}