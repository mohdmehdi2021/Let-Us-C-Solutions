/* Question 10 - Write a  program to receive cartesian co-ordinates(x,y) of a point and
convert them into polar co-ordinates(r,theta).
HINT : r = sqrt(x^2 + y^2) and theta = tan-1(y/x) */

// Coder = Mohd Mehdi
// Date = 18/04/2021
// Compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
#include<math.h>

int main(){

float radius,theta,x,y;
const float PI = 3.14159265;

printf("Enter X : ");
scanf("%f",&x);

printf("Enter Y : ");
scanf("%f",&y);

radius = sqrt((pow(x,2))+(pow(y,2)));
printf("Radius r = %0.3f\n",radius);

theta = atan(y/x);
printf("theta = %0.3f radians\n",theta);

return 0;
}