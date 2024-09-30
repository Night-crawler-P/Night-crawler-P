#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter Second number - ");
    scanf("%d",&b);

    if (a<b)
    {
        printf("%d is the maximum ",b);
    }    
    if (a==b)
    {
        printf("Both are equal");
    }
    if (a>b)
    {
        printf("%d is the maximum",a);
    }
    




}