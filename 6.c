#include <stdio.h>
void main()
{
    int units;
    float a1,a2,a3,a4;
    printf("Hello World");
    printf("\nEnter Consumed Units:-");
    scanf("%d",&units);
    if (units<=200)
    {
    a1=units*2;
    printf("Your Electricity Bill Is:-%.2f",a1);
    }
    else if (units<=400)
    {
    a2=((units-200)*3)+400;
    printf("Your Electricity Bill Is:-%.2f",a2);
    }
    else if(units<=600)
    {
    a3=((units-400)*4)+1000;
    printf("Your Electricity Bill Is:-%.2f",a3);
    }
    else if(units>=600)
    {
    a4=((units-600)*5)+1800;
    printf("Your Electricity Bill Is:-%.2f",a4);
    }

    
    



    
    

    printf("\n\n");
}
