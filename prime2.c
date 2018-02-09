#include<stdio.h>
void main()
{
int n,a,b,i,count;
printf("enter the two limits");
scanf("%d%d",&n,&a);
for(i=n;i<a;i++)
{
count=0;
for(b=2;b<i;b++)
{
if(i%b==0)
count++;
}
if(count==0)
printf("%d\n",i);
}
}



