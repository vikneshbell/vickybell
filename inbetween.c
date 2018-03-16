#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the number:");
    scanf("%d",&a);
    printf("If the number is between the limite1and9:\n");
    if((a>=1)&&(a<=9))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
