#include<stdio.h>
void main()
{
	int a[5],i,j,n,t;
	printf("enter the number:");
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	        t=a[i];
	        a[i]=a[j];
	        a[j]=t;
	        }
	}
	}
	printf("sorted list: \n");
	for(i=0;i<n;i++)
	{
	    printf("%d",a[i]);
	}
	
}

