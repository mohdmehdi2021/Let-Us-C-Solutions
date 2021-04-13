/* Question 9 - If lengths of three sides of triangle are input through keyboard, write a
program to find area of triangle. */

// Coder - Mohd Mehdi
// Date - 13/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
#include<math.h>
int main(){

float area,semi_perimeter,length1,length2,length3;

printf("Enter Length 1 : ");
scanf("%f",&length1);

printf("Enter Length 2 : ");
scanf("%f",&length2);

printf("Enter Length 3 : ");
scanf("%f",&length3);
// find semi-perimeter
semi_perimeter = (length1 + length2 + length3) * 0.5;
// break the Heron's Formula in two parts :
// 1) find intermediate result
float intermediate_result = semi_perimeter*(semi_perimeter - length1)*(semi_perimeter-length2)*(semi_perimeter-length3);
// Square root of intermediate result
area = sqrt(intermediate_result);

printf("Area : %0.2f square meter",area);
return 0;
}