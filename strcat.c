#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],s2[20];
    printf("enter the strings:\n");
    scanf("%s\n%s",&s,&s2);
   strcat(s,s2);
   printf("%s",s);
}
