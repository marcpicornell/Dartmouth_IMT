#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     number_to_guess,
            number_of_tries =0,
            guess;

    /* Input */

    scanf("%d", &number_to_guess);

    while(number_to_guess != guess)
    {
        scanf("%d", &guess);

        if(guess>number_to_guess)
        {
            printf("it is less\n");
        }
        if(guess<number_to_guess)
        {
            printf("it is more\n");
        }

        number_of_tries = number_of_tries + 1;
    }


    /* Output */

    printf("Number of tries needed:\n %d", number_of_tries);

    return 0;
}
