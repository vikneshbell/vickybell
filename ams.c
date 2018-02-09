#include<stdio.h>
void main() 
{
   int n,r=0,a,s;
   scanf("%d",&n);
   a=n;
   while(a>0)
 {
   s=a%10;
   r=r+s*s*s;
   a=a/10;
 }
  if(n==r)
  {
    printf("amstrong number");
  }
  else
  {
printf("Not an amstorng number");
  }
}
