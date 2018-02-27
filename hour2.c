#include <stdio.h>
void main()
{
    int a,s,c,d,e,f,g,h;
    printf("enter the hour and minite :\n");
    scanf("%d%d",&a,&s);
    printf("enter the other hour and minites :\n");
    scanf("%d%d",&c,&d);
    e=a-c;
    f=s-d;
    if(f>60)
    {   g=(f/60);
        h=(f%60);
        e=e+g;
        f=60-h;
    }
    printf("the subtract hour and minites :\n");
    printf("%d %d",e,f);
}

