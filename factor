#include<stdio.h>
void main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        while(n%i==0)
        {
            c=i;
            printf("%d ",i);
            n=n/i;
        }
       
    } 
}
