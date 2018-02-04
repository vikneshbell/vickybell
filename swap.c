#include <stdio.h>
void main()
{
    int a=3,b=5;
    printf("%d%d\n",a,b);
    fun (a,b);
   
}
int fun( x, y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d%d",x,y);
}
