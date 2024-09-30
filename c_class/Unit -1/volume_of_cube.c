#include <stdio.h>

int main()
{
    int height,width,depth;
    printf("Enter height of cube (in metres) - ");
    scanf("%d",&height);
    printf("Enter width of cube (in metres)- ");
    scanf("%d",&width);
    printf("Enter depth of cube (in metres)- ");
    scanf("%d",&depth);
    int volume=(height*width*depth);
    printf("The Volume of the given cube is %d metre-cube",volume);
    return 0;
}