#include<stdio.h>
#include<string.h>
void main()
{
    char a[345];
    int i,count=1,c;
    printf ("Enter the string:");
    gets(a);
    c=strlen(a);
    for(i=0;i<=c;i++)
    {
    if(a[i]==' ')
    {
        count=count+1;
    }
    }
    printf ("The total words is :%d",count);
}
