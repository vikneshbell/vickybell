#include<stdio.h>
void main()
{
    int a[100],b,c,d;
    printf("enter the numbers:\n");
    for(b=1;b<=10;b++)
    {
        scanf("%d",&a[b]);
    }
    c=a[1];
    for(b=1;b<=10;b++)
    {
        if(c<a[b])
        {
            c=a[b];
        }
    }
    printf("the larger number is %d",c);
    
}
