#include<stdio.h>
void main()
{
    int a[10],i,b,c=0,d;
    printf("enter the number of element:\n");
    scanf("%d",&b);
    printf("enter the numbers:\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        c=c+a[i];
    }
    d=c/5;
    printf("the average is:%d",d);
    
}
