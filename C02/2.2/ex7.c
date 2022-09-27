#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    /* Declaration */
    int total_population = 0;
    int total_infected = 1;
    int number_of_days = 1;
    int plus = 0;

    /* Input */

    scanf("%d", &total_population);


    while ((total_infected != total_population) && (total_infected < total_population))
    {

        total_infected = (total_infected * 2) + total_infected;
        number_of_days++;
    }

    /* Output */

    printf("%d\n", number_of_days);

    return 0;
}
