#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s2[20];
    int a,b,c;
    printf("enter the strings:\n");
    scanf("%s\n%s",&s,&s2);
    a=strlen(s);
    b=strlen(s2);
    if(a<b)
    {
        printf("%s",s);
    }
    else
    {
        printf("%s",s2);
    }
}
