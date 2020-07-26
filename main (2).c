/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct employee{
    char name[20];
    int empid;
    float salary;
};
int main()
{
    struct employee emp;
    printf("\n enter details of an employee is:\n");
    printf("name of the employee :");
    scanf("%s",&emp.name);
    printf("id number of an employee:");
    scanf("%d",&emp.empid);
    printf("salary of an employee:");
    scanf("%d",&emp.salary);
    
    printf("\n entered details is:");
    printf("name :%s",emp.name);
    printf("id:%d",emp.empid);
    printf("salary:%f\n",emp.salary);
    return 0;
}
    
    
    
    
    

