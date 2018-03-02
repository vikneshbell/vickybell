#include <stdio.h>
void main()
{
    int a[100],s,d,i,j,x;
    printf("enter the number of element");
    scanf("%d",&s);
    for(d=0;d<s;d++)
    {
        scanf("%d",&a[d]);
    }
    for(i=0;i<s;i++)
    {
        for(j=j+i;j<s;j++)
        {
            if(a[i]<a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    printf("%d",a[2]);
}

