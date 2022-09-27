#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     number_of_stars,
            row,
            column;

    /* Input */

    scanf("%d", &number_of_stars);

    /* Output */
    for(row=0;row<number_of_stars;row++)
    {

        for(column=0;column<number_of_stars;column++)
        {
                printf("*");

        }

        printf("\n");
    }

    return 0;
}
