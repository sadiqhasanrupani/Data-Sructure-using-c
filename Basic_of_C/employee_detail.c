#include<stdio.h>
void update();
struct employee{
    int emp_id ;
    char emp_name[100];
    float salary , salary_update , t_salary;
};
struct employee e;

void main(){
    printf("\n Enter you Name: ");
    scanf("%s",&e.emp_name);

    printf("\n Enter you ID: ");
    scanf("%d",&e.emp_id);

    printf("\n Enter your Salary: ");
    scanf("%f",&e.salary);

    printf("\n Updated salary is:  ");
    scanf("%f",&e.salary_update);

    e.t_salary = e.salary + e.salary_update;

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~ Current Salary ~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n Your Name is: %s",e.emp_name);

    printf("\n Your ID is: %d",e.emp_id);

    printf("\n Your Salary is: %.2f",e.salary);

    printf("\n ~~~~~~~~~~~~~~~~~~~~~~ Updated Salary ~~~~~~~~~~~~~~~~~~~~~~~~");


    printf("\n Your Name is: %s",e.emp_name);

    printf("\n Your ID is: %d",e.emp_id);

    printf("\n Your Total Salary is: %.2f",e.t_salary);

}
