#include <stdio.h>
void main()
{
    int n=0,b=-11,c=2;
    
    l1:
    n=n+1;
    printf("%d,",n);
    if (n<10)
    goto l1;
    else (n>10);
    
    printf("\n\n");
    
    l2:
    b=b+1;
    printf("%d,",b);
    if (b<10)
    goto l2;
    else (b>10);
    printf("\n\n");
    l3:
    c=c*2;
    printf("%d,",c);
    if (c<=1024)
    goto l3;
    else (c>1024);


    printf("\n\n");
}
