/* Question 3 - If the marks obtained by the student in five different subjects are input through the keyboard. 
Write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that, the 
the maximum marks obtained by a student in each subject is 100. */

// Coder- Mohd Mehdi
// Date - 07/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

float math,science,sst,english,computer;  // sst = social studies
float aggregate,percentage;

printf("Enter Math's marks : ");
scanf("%f",&math);

printf("Enter Science Marks : ");
scanf("%f",&science);

printf("Enter S.St. Marks : ");
scanf("%f",&sst);

printf("Enter English Marks : ");
scanf("%f",&english);

printf("Enter Computer marks : ");
scanf("%f",&computer);

aggregate = math + science + sst + english + computer;
printf("\nAggregate : %0.2f\n",aggregate);

percentage = aggregate*100/500;
printf("Percentage : %0.2f\n",percentage);

return 0;
}