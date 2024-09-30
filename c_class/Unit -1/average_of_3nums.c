#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter Second number - ");
    scanf("%d",&b);
    printf("Enter Third number - ");
    scanf("%d",&c);
    float average=(a+b+c)/3;
    printf("The Average of the given numbers is %f",average);
    return 0;
}