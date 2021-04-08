/* Question 4 - Temperature of a city in Fahrenheit degrees is input through the keyboard.
Write a program to convert this temperature into Centigrade degrees.*/

// Coder - Mohd Mehdi
// Date - 08/04/2021
// Compiler - gcc (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0

#include<stdio.h>
int main(){

float fahrenheit;
float centigrade;


printf("Enter Fahrenheit degree : ");
scanf("%f",&fahrenheit);


centigrade = (fahrenheit -32)/1.8;

printf("%0.2f degree Centigrade.",centigrade);

return 0;
}

/* Concept behind this formula of centigrade --->
  Credit goes to - https://www.quora.com/profile/RathindraNath-Modak

    First we will understand that only temperature difference of a body in Fahrenheit scale 
    may be converted to temperature difference of the same in Celsius scale by 5/9. Let a 
    body is at temperature 70°F , by heating it’s temperature raised to a temperature 106°F . 
    So rise of temperature in F scale is (106–70)= 36°F. This rise of temperature 36°F will 
    be equivalent to temperature rise 36×5/9=20°C . But if we consider the temperature of 
    a body as 70°F , this temperature 70°F is not equivalent to 70×5/9=38.9°C , then we have 
    to use formula C/5=(F-32)/9 , →C/5=(70–32)/9 →C/5=4.222 →C= 21.1111.

Now why this two formula exists ?

Freezing temperature of water considered in Celsius scale is 0°C and in Fahrenheit scale
 is 32°F . Boiling point of water in two scales are 100°C and 212°F respectively. So there is
  100 divisions in Celcius scale and 180 divisions in Fahrenheit scale, and those are equivalent
   . So, per 1 division rise in temperature in Fahrenheit scale is equivalent to 100/180 =5/9
    division in Celcius scale. So we are using 5/9 for converting difference in temperature
     from Fahrenheit to Celcius . As 0°C coincide with 32 ° F , for any temperature conversion
      from °F to °C we have to subtract 32 from °F temperature then to convert into °C.

C= (F–32)×5/9 →→C/5=(F–32)/9

Note:—. At –40°F temperature in Celcius will be

C/5=(–40–32)/9 → C/5=–72/9 →C=–40

So –40°F and –40°C is the same temperature . */