#include <stdio.h>
void main ()

{
int a,b,c;
    printf("Please enter two values");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;

    printf("The value of a= %d  the value of b= %d",a,b);


}
