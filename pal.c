#include <stdio.h>
int main()
{
    int a,rev=0,ori,rem;
    printf("enter a number");
    scanf("%d",&a);
    ori=a;
    while( a!=0 )
    {
        rem=a%10;
       rev=rev*10+rem;
        a=a/10;
    }
    
     if (ori == rev)
        {
        printf("%d \nis a palindrome.", ori);
        } 
    else
        {
        printf("%d \nis not a palindrome.", ori);
        }
    
    
}

