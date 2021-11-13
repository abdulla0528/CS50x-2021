#include <cs50.h>
#include <stdio.h>
int main()
{

    int start;

    do
    {
        start = get_int("Start size ?\n");
    }
    while (start < 9);

    int end;
    do
    {
        end = get_int("End size ?\n");
    }
    while (end < start);

    int years = 0;


    while (start < end)
    {

        start += (start / 3) - (start / 4);
        years++;

    }

    printf("Years: %i \n", years);

}
