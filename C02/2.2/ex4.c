#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     number_of_cities,
            populations,
            index,
            result = 0;

    /* Input */

    scanf("%d", &number_of_cities);

    for(index=0;index<number_of_cities;index++)
    {
        scanf("%d", &populations);
        if(populations>10000)
        {
                result=result+1;
        }
    }

    /* Output */

    printf("%d", result);

    return 0;
}
