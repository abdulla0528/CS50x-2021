#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main()
{
    int cents_owed;

    do
    {
        float dollars_owed = get_float("Change owed: ");
        cents_owed = round(dollars_owed * 100);
    }
    while (cents_owed <= 0);

    int quarters = cents_owed / 25;
    int dimes = (cents_owed % 25) / 10;
    int nickels = ((cents_owed % 25) % 10) / 5;
    int pennies = ((cents_owed % 25) % 10) % 5;

    printf("%d\n", quarters + dimes + nickels + pennies);
}
/*#include <cs50.h>
#include <stdio.h>
int main (void)
{
    int n;
    do
    {
        n =get_int("Width: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }

    printf("\n");
}*/
        