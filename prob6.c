/* Question 6 - Paper of size A0 has dimensions 1189 mm x 841 mm. Each subsequent size A(n)
 is defined as A(n-1) cut in half parellel to its shorter sides. Thus, paper of size A1 would
 have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0,A1,A2,
 A3....A8. */

 // Coder = Mohd Mehdi
 // Date = 10/04/2021
 // Compiler = gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

 #include<stdio.h>
 int main(){
 
 int length = 1189,breadth = 841,swap,counter;
 
 for(counter = 0;counter < 9; counter++){
 swap = length;
 length = breadth;
 breadth = swap/2;

 printf(" %d x %d\n",length,breadth);

 }


 return 0;
 }