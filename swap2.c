#include<stdio.h>
void main()
{
    int a,s,c;
    printf("enter the two number:");
    scanf("%d%d",&a,&s);
    c=a;
    a=s;
    s=c;
     printf("%d\n%d",a,s);
}
