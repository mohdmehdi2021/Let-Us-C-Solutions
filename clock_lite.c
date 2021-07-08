#include<stdio.h>
int main(){

    for (int hour = 1; hour <= 24; hour++)
    {
        for (int min = 0; min <= 59; min++)
        {
            if (hour < 12)
            {
                printf("%d : %d AM\n",hour,min);
            }
            else if (hour == 12 && min == 0)
            {
                printf("%d : %d PM ( Noon )\n",hour,min);
            }
            else if (hour >= 12 && hour < 24)
            {
                printf("%d : %d PM\n",hour,min);
            }
            else if(hour == 24 && min == 0){
                printf("%d : %d AM ( Midnight )\n",hour,min);
                break;
            }
           
            
            



        }
        
    }
    




















return 0;
}