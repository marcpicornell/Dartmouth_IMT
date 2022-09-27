#include <stdio.h>

int main(void)
{

    int age,
        luggage_weight,
        extra,
        price_to_pay = 0;

    /* Input */

    scanf("%d", &age);
    scanf("%d", &luggage_weight);

    /* Logic */
    extra = luggage_weight > 20;

    if(age == 60)
    {
            price_to_pay = 0;
    }
    else if (age < 10)
    {
            price_to_pay = 5;
    }
    else if (extra)
    {
            price_to_pay = 30 + 10;
    }
    else
    {
            price_to_pay = 30;
    }

    /* Output */

    printf("%d", price_to_pay);

    return 0;
}
