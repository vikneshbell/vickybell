#include<stdio.h>
void main()
{
    int a[20],i=0,b,c,j;
    printf("enter the no of element:\n");
    scanf("%d",&b);
    
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {for(j=i+1;j<=b;j++)
       if(a[i]<a[j])
    {
        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
    }
    printf("the first and lost numbers are\n%d\n%d",a[i],a[b-2]);
}
