#include<stdio.h>
void main()
{
    int a,c=0,v;
    printf("enter the number:\n");
    scanf("%d",&a);
    printf("number of digits:\n");
    while(a>0)
    {   
        c=c+1;
        a=a/10;
    }
    printf("%d",c);
}
