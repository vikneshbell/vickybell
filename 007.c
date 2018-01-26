#include<stdio.h>
void main()
{
    int units;
    float charge;
    float total;
    printf("enter a units");
    scanf("%d",&units);
    if(units<=50)
    {
        charge=units*0.5;
        
    }
    else if(units<50 && units<=150)
    {
        charge=50*0.5+(units-50)*0.75;
        
    }
    else if(units<150 && units>=250)
    {
        charge=50*0.5+(100)*0.75+(units-150);
        
    }
    else if(units<250 && units<=400)
    {
        charge=50*0.5+(100)*0.75+(100)*1.2+(units-250)*1.50;
        
    }

     total=charge*1.2;
     printf("total%f",total);
    
}

