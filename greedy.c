#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define q 25
#define d 10
#define n 5
#define p 1

int main(void)
{
    float change;
    int balance,count = 0;
    
    //ask user to enter the change and check the boundary conditions for change value
    do
    {
        printf("0 hai! How much change is owed?\n");
        change = GetFloat();
    }while(change < 0);
    
    balance = (int)roundf(change*100);
    
    count = count + balance/q;
    balance = balance%q;
    
    count = count + balance/d;
    balance = balance%d;
    
    count = count + balance/n;
    balance = balance%n;
    
    count = count + balance/p;
    balance = balance%p;
    
    printf("%d\n",count);
}