#include <stdio.h>

int main()
{ 
    long int n;
    int count=0;
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("%d",count);
    
}
