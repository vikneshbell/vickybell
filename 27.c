#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3],b,i,j;

	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    	if(a[i]<a[j])
    	{
    		b=a[i];
    		a[i]=a[j];
    		a[j]=b;
		}
	}
	}
    for(i=0;i<3;i++)
    {printf("%d",a[i]);
    
	}
	getch();
}
