#include<stdio.h>
int main(void)
{
    int n2,n1,num,i,rem,temp;
    scanf("%d %d",&n2,&n1);
    for(i=n2;i<=n1;i++)
    {
     num=0,rem=0;
     temp=i ;
        while(temp!=0)
        {
           rem=temp%10;
           num=num+(rem*rem*rem);
           temp=temp/10;
        }
        if(i==num)
           printf("%d ",num);
     }
}
