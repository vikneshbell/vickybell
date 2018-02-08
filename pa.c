#include <stdio.h>
int main()
{
    int a,reversedinteger=0,originalInteger,reminder;
    printf("enter a number");
    scanf("%d",&a);
    originalInteger=a;
    while( a!=0 )
    {
        reminder=a%10;
       reversedinteger=reversedinteger*10+reminder;
        a=a/10;
    }
    
     if (originalInteger == reversedinteger)
        {
        printf("%d \nis a palindrome.", originalInteger);
        } 
    else
        {
        printf("%d \nis not a palindrome.", originalInteger);
        }
    
    
}
