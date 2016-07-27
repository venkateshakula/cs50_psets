#include <stdio.h>
#include<cs50.h>

int main(void)
{
    int minutes,bottles;
    
    //ask user to enter minutes value
    do
    {
        printf("minutes : ");
        minutes = GetInt();
    }while(minutes < 0);
    
    bottles = minutes*12;
    printf("bottles: %d\n",bottles);
    
}