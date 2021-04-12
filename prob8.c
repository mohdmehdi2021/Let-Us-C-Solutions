/* Question - 07 : If a 5-digit number is input through keyboard. Write a program to reverse 
the number. */
// w.c.l.
// Coder - Mohd Mehdi
// Date - 11/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
 int main()  
{  
int number, reverse=0, remainder;  
printf("Enter a number: ");  
  scanf("%d", &number);  
  while(number > 0) 
  {  
     remainder = number%10;  
     reverse = reverse*10 + remainder;  
     number = number/10;  
  }  
  printf("Reversed Number: %d",reverse);  
return 0;
} 
