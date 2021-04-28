/* Two numbers are input through keyboard into two locations C and D. Write a program to
interchange the contents of C and D.*/

// Coder = Mohd Mehdi
// Date = 29/04/2021
// Compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

int c,d,xtra;

printf("Enter a integer for C : ");
scanf("%d",&c);
printf("Enter a integer for D : ");
scanf("%d",&d);

printf("You Entered : C = %d and D = %d\n",c,d);

xtra = c;
c = d;
d = xtra;

printf("After Interchanging Number : C = %d and D = %d",c,d);


return 0;
}