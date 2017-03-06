//getfloat
//multiply by 100, round
//while > 25, subtract 25 from value and increase count
//repeat for 3 other coins
//print coin count

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    int coins = 0;
    
    do
    {
        printf("O hai! How much change is owed? ");
        change = GetFloat();
    } while (change <0);
    
    int new_change = round(change*100);
    
    //QUARTERS
    for (int i = new_change; i >=25; i=i-25)
    {
        new_change = new_change - 25;
        coins++;
    }
    //DIMES
    for (int i = new_change; i >=10; i=i-10)
    {
        new_change = new_change - 10;
        coins++;
    }
    //NICKELS
    for (int i = new_change; i >=5; i=i-5)
    {
        new_change = new_change - 5;
        coins++;
    }
    //PENNIES
    for (int i = new_change; i >=1; i=i-1)
    {
        new_change = new_change - 1;
        coins++;
    }
    printf("%i\n", coins);
    
}
