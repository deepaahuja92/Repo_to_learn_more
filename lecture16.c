#include <stdio.h>
typedef struct point
{
    int x;
    int y;
}P;

int main()
{
    P p;
    p.x=21;
    p.y=78;
    printf("%d %d",p.x,p.y);
    return 0;
}