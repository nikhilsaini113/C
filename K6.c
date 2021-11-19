#include <stdio.h>
void main()
{
    int units;
    float a1,a2,a3,a4;
    printf("\nHello World");
    printf("\nEnter Consumed Units:-");
    scanf("%d",&units);
    // if (units<=200)
    // {
    // a1=units*2;
    // printf("Your Electricity Bill Is:-%.2f",a1);
    // }
    // else if (units<=400)
    // {
    // a2=((units-200)*3)+400;
    // printf("Your Electricity Bill Is:-%.2f",a2);
    // }
    // else if(units<=600)
    // {
    // a3=((units-400)*4)+400+600;
    // printf("Your Electricity Bill Is:-%.2f",a3);
    // }
    // else
    // {
    // a4=((units-600)*5)+400+600+800;
    // printf("Your Electricity Bill Is:-%.2f",a4);
    // }
    float bill=0;
    if(units>600)
    {
        bill += (units-600)*5;
        units = 600;
    }
    if(units>400)
    {
        bill += (units-400)*4;
        units = 400;
    }
    if(units>200)
    {
        bill = bill + (units-200)*3;
        units = 200;
    }
    if(units>0)
    {
        bill += (units*2);
        units = 0;
    }

    printf("%f", bill);

    printf("\n\n");
}
