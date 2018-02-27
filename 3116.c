#include <stdio.h>
void main()
{
    int i,a,s,d,f=0;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&s,&d);
    for(i=0;i<a;i++)
    {
        if(i==0)
        {
            f=f+s;
        }
        else
        {
            s=s+d;
            f=f+s;
        }
    }
    printf("%d",f);
    
}


