/* A certain grade of steel is graded according to the following conditions -
i) Hardness must be greater than 50
ii) Carbon Content must be less than 0.7
iii) Tensile strength must be greater than 5600.

The grades are as follows :
Grade 10 - if all three conditions are met
Grade 9 - if condition (i) and (ii) are met
Grade 8 - if condition (ii) and (iii) are met
Grade 7 - if condition (i) and (iii) are met
Grade 6 - if only one codition is met
Grade 5 - if none of condition is met

Write a program to output the grade of steel by taking values of Hardness, Carbon Content and 
Tensile strength of steel. */

// Coder - Mohd Mehdi
// Date - 01/05/2021

#include<stdio.h>

int main(){

int hardness , tensile_strength;
float carbon_content;

printf("Enter Hardness\n");
scanf("%d",&hardness);

printf("Enter Carbon content\n");
scanf("%f",&carbon_content);

printf("Enter Tensile Strength\n");
scanf("%d",&tensile_strength);


if(hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600){
    printf("Grade 10\n");
}
else if(hardness > 50 && carbon_content < 0.7){
    printf("Grade 9\n");
}
else if(carbon_content < 0.7 && tensile_strength > 5600){
    printf("Grade 8\n");
}
else if(hardness > 50 && tensile_strength > 5600){
    printf("Grade 7\n");
}
else if(hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600){
    printf("Grade 6\n");
}
else{
    printf("Grade 5\n");
}


return 0;
}