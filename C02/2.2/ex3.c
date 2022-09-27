#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     number_of_ingredients,
            index;

    double  ingredients[10],
            price_per_pound[10],
            total_price;

    /* Input */

    scanf("%d", &number_of_ingredients);

    for(index=0;index<number_of_ingredients;index++)
    {
        scanf("%lf", &ingredients[index]);

    }

    for(index=0;index<number_of_ingredients;index++)
    {
        scanf("%lf", &price_per_pound[index]);

    }

    /* Logic */

    for(index=0;index<number_of_ingredients;index++)
    {
        total_price = total_price + (ingredients[index] * price_per_pound[index]);

    }

    /* Output */

    printf("%.6lf", total_price);

    return 0;
}
