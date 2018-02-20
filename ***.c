#include<stdio.h>
void main()
{
    int a,s;
    printf("enter a number:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        s=(i*a);
        printf("%d\n",s);
    }
    
}
