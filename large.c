#include<stdio.h>
void main()
{
    int a[3],i,b;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[1]>a[2])
    {
        if(a[1]>a[3])
        {
            printf("%d",a[1]);
        }
    }
    if(a[2]>a[3])
    {
        printf("%d",a[2]);
    }
    else
    {
        printf("%d",a[3]);
    }
}
