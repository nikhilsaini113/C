#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("\nEnter NUmber1=");
    scanf("%d",&a);
    printf("\nEnter Number2=");
    scanf("%d",&b);
    printf("\nEnter Number3=");
    scanf("\n%d",&d);
    c=a+b;
    printf("\nSum is=%d",c);
    if (a>b)
    {
    printf("\na is more than b");
    printf("\n%d",a);
    }
    else
    {
    printf("\nb is more than a");
    printf("\n%d",b);
    }
    if(a>b && a>c)
    printf("\nA is greatest");
    else if (b>c)
    printf("\nB is greatest");
    else
    printf("\nC is greatest");
    l1:
    if (a>5)
    {
        printf("\nHello World");
        a=a-1;
        goto l1;
    }

    




    printf("\n\n");
    




}
