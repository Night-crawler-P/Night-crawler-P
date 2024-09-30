#include<stdio.h>
#include<string.h>

int main()
{
    char name;
    printf("Enter Your Name  - ");
    scanf("%s",&name);
    
    int roll_no;
    printf("Enter Your Roll NO - ");
    scanf("%d",&roll_no);
    
    float a,b,c,d,e,score;
    printf("Enter marks of english - ");
    scanf("%f",&a);
    printf("Enter marks of maths - ");
    scanf("%f",&b);
    printf("Enter marks of physics - ");
    scanf("%f",&c);
     printf("Enter marks of chemistry - ");
    scanf("%f",&d);
    printf("Enter marks of computer - ");
    scanf("%f",&e);
    
    float percent;
    score=a+b+c+d+e;
    percent=(score/500)*100;

    printf("STUDENT DETAILS - ");
    printf("Name - %c \n Roll no- %s \n",name,roll_no);
    
    
    printf("Your score is %f",score);
    printf("\nYour Percentage is %f",percent);
}