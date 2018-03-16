#include<stdio.h>
void main()
{
    int a,b=1,c=0,d,i;
    printf("enter the number:");
    scanf("%d",&a);
     printf("the fibonscci series is :%d",b);
    for(i=1;i<a;i++)
    {
        d=b+c;
        c=b;
        b=d;
        printf("%d",d);
       
    }
}
