#include<stdio.h>
void main()
{
    int a;
    printf("enter a price of product:");
    scanf("%d",&a);
    if(a<10)
    {
        printf("rack no 254");
    }
     else if(a<=50)
    {
        printf("rack no 256");
    }
     else if(a<=100)
    {
        printf("rack no 257"); 
    }
     else if(a<=500)
    {
        printf("rack no 258");
    }
     
     else if(a<=1000)
    {
         printf("rach no 259");
    }
     else if(a<=1500)
    {
        printf("rack no 260");
    }   
}
