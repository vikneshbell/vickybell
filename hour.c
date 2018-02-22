#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the time in minite");
    scanf("%d",&a);
    b=a%60;
    c=a/60;
    printf("hour %d minite %d",c,b);
}
