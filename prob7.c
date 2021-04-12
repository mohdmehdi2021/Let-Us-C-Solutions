/* Question 07 - If a five-digit number is input through the keyboard, write a program to
 calculate the sum of its digits. (Hint : Use the modulus operator [%]. ) */

// Coder - Mohd Mehdi
// Date - 11/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

int number,sum,remainder = 0;

printf(" Enter any 5-digit number. \n");
scanf("%d",&number);

for(int count = 1;count < 6; count++){

remainder = number % 10;
sum = sum + remainder;
number = number/10;

}

printf("Sum of digit of entered number is : %d",sum);

return 0;
}

/* Step 1 - Input 5-digit number.
   Step 2 - Modulus it with 10, to get remainders, using for-loop.
   Step 3 - Add the remainder to the sum.

   [ Step 4 - Divide the number with 10 -for next count- in for-loop. ]

   Step 5 - Print the sum. */