/* If value of an angle is input through keyboard, Write a program to print all its ratios. */
// Coder = Mohd Mehdi
// Date = 26/04/2021
// Compiler =  gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
#include<math.h>
int main(){

float angle,PI = 3.14159265;

printf("Enter the angle : ");
scanf("%f",&angle);

float degree = angle * (PI/180); // converting in radian in degrees


printf(" sin = %.3lf\n ", sin(degree));
printf(" cos = %.3lf\n ", cos(degree));
printf(" tan = %.3lf\n ", tan(degree));

double cot = (1/tan(degree));
printf(" Cot = %.3lf\n ", cot);

double sec = (1/cos(degree));
printf(" Sec = %.3lf\n ", sec);

double cosec = (1/sin(degree));
printf(" Cosec = %.3lf\n ", cosec);


return 0;
}

