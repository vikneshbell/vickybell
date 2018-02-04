#include<stdio.h>
float v;
void main()
{
    int r,h;
    scanf("%d",&r);
    scanf("%d",&h);
    printf("volume:");
    volume(&r,&h);
   }
int volume(int *g,int *p)
{
    v=(3.14*((*g)*(*g))*(*p));
    printf("%f",v);
    
}

