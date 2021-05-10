/* If the three sides of triangle is entered through the keyboard. Write a program to check 
whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater
than the largest of the three sides. */

// Author = Mohd Mehdi
// Date = 10/05/2021
// Compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0


/* if S1 is greater, S2 + S3 will be greater than S1

    >>> Steps <<<
   - enter three inputs
   - Determine which input is largest of all
   - sum the other two
   - if sum is greater than largest one , the triangle is valid. */


#include<stdio.h>
int main(){

int s1, s2, s3, sum;

printf("Enter side1 : \n");
scanf("%d",&s1);

printf("Enter side2 : \n");
scanf("%d",&s2);

printf("Enter side3 : \n");
scanf("%d",&s3);

if(s1 > s2 && s1 > s3){
    sum = s2 + s3;
    if(sum > s1){
        printf("Triangle Valid");
    }
}

else if(s2 > s3 && s2 > s1){
    sum = s3 + s1;
    if(sum > s2){
        printf("Triangle Valid");
    }
}

else if(s3 > s1 && s3 > s2){
    sum = s1 + s2;
    if(sum > s3){
        printf("Triangle Valid");
    }
}

else{
    printf("Invalid tringle");
}
return 0;
}