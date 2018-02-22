#include <stdio.h>
void main()
{
     int a[3],b,c;
     printf("enter the number:");
     scanf("%d",&b);
     for(c=1;c<=b;c++)
     {
         scanf("%d",&a[c]);
     }
     if(a[1]<a[2])
     {
         if(a[1]<a[3])
         {
             printf("%d",a[1]);
         }
     }
      else
      {
          if(a[2]<a[3])
          {
              printf("%d",a[2]);
          }
          else
          {
              printf("%d",a[3]);
          }
     }
}
