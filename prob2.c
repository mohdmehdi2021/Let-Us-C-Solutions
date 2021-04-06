/* Question 2- The distance between two cities (in km.) is input through the keyboard.
Write a program to convert and print this distance in meters, feets, inches and centimeters.*/

// coder - Mohd Mehdi
// date - 06/04/2021
// compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include <stdio.h>
int main(){

int distance;
int meter,feet,inches,centimeter;

printf("Enter the distance in kilometer : ");
scanf("%d",&distance);

meter = distance * 1000;
printf("The distance in meters is : %d\n",meter);

feet = distance * 1000 * 3.28084;
printf("The distance in Feets is : %d\n",feet);

inches = distance * 1000 * 3.28084 * 12;
printf("The distance in Inches is : %d\n",inches);

centimeter = distance * 1000 * 3.28084 * 12 * 2.54;
printf("The distance in Centimeters is : %d\n",centimeter);



return 0;
}
