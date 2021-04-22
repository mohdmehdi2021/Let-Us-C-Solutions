/* Question 12 - Wind chill factor is the felt air temperature on the exposed skin due to wind.
The wind chill temperature is always lower than the air temperature, and is calculated as per
the following formula :
wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^ 0.16
where t is temperature and v is wind velocity. Write a program to calculate wind chill factor. */

// Coder = Mohd Mehdi
// Date = 22/04/2021
// Status = incomplete
// compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0
// 35.74 + 0.6215×T - 35.75×V0.16 + 0.4275×T×V0.16

#include<stdio.h>
#include<math.h>



int main(){

float wcf,t,celsius,v,wv; /* WCF = wind chill factor, t = temperature, v = wind velocity */

printf("Enter Temperature (in celsius) : ");
scanf("%f",&celsius);
printf("Enter Wind Velocity (in km/h) : ");
scanf("%f",&wv);

t = (celsius * 1.8) + 32;
v = wv / 0.6213;

// wcf = 35.74 + (0.6215 * t) - (35.75 * pow(v,0.16)) + (0.4275* t) *pow(v,0.16);

wcf = 35.74 + (0.6215 * t) + (((0.4275*t)*pow(v,0.16))-(35.75*pow(v,0.16)));

printf(" Wind Velocity : %0.2f\nTemperature : %0.2f\nWind Chill Factor = %0.4f degree Fahrenheit",v,t,wcf);
return 0;
}