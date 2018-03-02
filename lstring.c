#include<stdio.h>
#include<string.h>
void main()
{ 
    char a[100];
    int s,d=0,i;
    printf("enter the string:");
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='z'))
        {
            d=d+1;
        }
    }
    printf("%d",d);
    
}
