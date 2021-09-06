#include <stdio.h>
#include <cs50.h>

int starting_population(void);      // Declares starting population function

int main(void)
{
    // Gets starting and ending population numbers from user
    int start_pop = starting_population();

    int end_pop;
    do
    {
        end_pop = get_int("Enter ending poopulation: ");
    }
    while(end_pop < start_pop);

    int born_num;
    int dead_num;
    int years_counter = 0;
    // Iteratively calculate growth of start_pop until it reaches end_pop
    while (start_pop < end_pop)
    {
        born_num = start_pop / 3;
        dead_num = start_pop / 4;
        start_pop = start_pop + born_num - dead_num;
        years_counter ++;
    }

    printf("It will take %i years.\n", years_counter);

}


// Function to prompt user for correct starting population.
int starting_population(void)
{
    int s;
    do
    {
        s = get_int("Enter a starting population: ");
    }
    while(s < 9);
    return s;
}
