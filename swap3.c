#include<stdio.h>
void main()
{
    int a,s,c;
    printf("enter the two number:");
    scanf("%d%d",&a,&s);
    c=s;
    s=a;
    a=c;
     printf("%d\n%d",s,a);
}
