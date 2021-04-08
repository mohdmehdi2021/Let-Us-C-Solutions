/* Question 5 - The length and breadth of a rectangle and radius of the circle is input 
through the keyboard. Write a program to calculate the area and perimeter of the rectangle, 
and the area and circumference of circle. */

// Coder - Mohd Mehdi
// Date - 08/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

float length,breadth,area_of_rect,perimeter_of_rect;
float radius,area_of_circle,circumference;
const float PI = 3.14159265;

// Rectangle

printf("Enter Length of the Rectangle : ");
scanf("%f",&length);

printf("Enter Breadth of the Rectangle : ");
scanf("%f",&breadth);

area_of_rect = length * breadth;
printf("Area of Rectangle : %0.2f",area_of_rect);

perimeter_of_rect = 2*(length + breadth);
printf("\nPerimeter of Rectangle : %0.2f\n",perimeter_of_rect);

// Circle

printf("Now, Enter the radius of Circle : \n");
scanf("%f",&radius);

area_of_circle = PI * radius * radius;
printf("Area of Circle : %0.2f",area_of_circle);

circumference = 2 * PI * radius;
printf("\nCircumference of the circle : %0.2f",circumference);


return 0;
}