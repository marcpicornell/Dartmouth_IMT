#include <stdio.h>

int main(void)
{

    int dice1, dice2;
    int price_to_pay;

    scanf("%d", &dice1);
    scanf("%d", &dice2);

    if(dice1+dice2>10)
    {
        price_to_pay = 36;
        printf("Special tax\n%d", price_to_pay);
    }
    else
    {
        price_to_pay = (dice1+dice2)*2;
        printf("Regular tax\n%d", price_to_pay);
    }

    return 0;
}
