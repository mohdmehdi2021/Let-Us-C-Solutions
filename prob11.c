/* Question 11 - Write a program to receive the value of Latitude (L1,L2) and Longitude (G1,G2)
in degrees, of two places on the earth and output the distance (D) between them in nautical miles.
The formula for distance in nauticle miles is given below -
D = 3963 cos^ -1(sin L1 sin L2 + cos L1 cos L2 * cos(G2 - G1)) */

// Coder = Mohd Mehdi
// Date = 19/04/2021
// Compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
#include<math.h>

int main(){

double L1,L2,G1,G2;
double D;
double lato_deg,latt_deg,longo_deg,longt_deg;
/*lato_deg = latitude-one degree
  latt_deg = latitude-two degree
  longo_deg = longitude-one degree
  longt_deg = longitude-two degree */

const float PI = 3.141592;

printf("Enter Latitude L1 : ");
scanf("%lf",&lato_deg);

printf("Enter Longitude G1 : ");
scanf("%lf",&longo_deg);

printf("Enter Latitude L2 : ");
scanf("%lf",&latt_deg);

printf("Enter Longitude G2 : ");
scanf("%lf",&longt_deg);
// convert degree into radians because trig. functions in C takes and returns radians.
L1 = lato_deg * (PI/180);

G1 = longo_deg * (PI/180);

L2 = latt_deg * (PI/180);

G2 = longt_deg * (PI/180);


double D_intermediate = 3963 * acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2)) * cos(G2-G1)); // answer is in miles
D = D_intermediate/1.15078; // converting miles into nautical miles
printf("Distance in Nauticle Miles : %0.4lf",D);

return 0;
}