#include <stdio.h>

int main()
{
    int emp_id, salary;
    printf("Enter Id of employee- ");
    scanf("%d", &emp_id);
    printf("Enter salary of employee- ");
    scanf("%d", &salary);
    int da = (0.05 * salary);
    int hra = (0.1 * salary);
    int gross_salary = da + hra + salary;
    printf("The Gross salary of the employee with emplyee id = %d is \n %d", emp_id, gross_salary);
    return 0;
}