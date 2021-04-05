/* Question 1- Ramesh's basic salary is entered through keyboard. If his dear allowance is
40% and house rent allowance is 20%, of his basic salary, then find his gross salary. */

// coder - Mohd Mehdi
// date - 05/04/2021
// compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

int gross_sal,basic_sal;
int da, hra;    // da = dear allowance, hra = house rent allowance

printf("Enter your basic Salary : ");
scanf("%d", &basic_sal);

da = (40*basic_sal/100);    // Multiplication is done before division
hra = (20*basic_sal/100);

gross_sal = basic_sal + da + hra;

printf("Your Gross salary is %d",gross_sal);

return 0;
}