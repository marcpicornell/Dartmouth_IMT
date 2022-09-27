#include <stdio.h>

int main(void)
{

    int past_noon;
    int price_to_pay;
    int base_price = 10;

    scanf("%d", &past_noon);

    if(past_noon==0)
    {
        price_to_pay = base_price;
    }
    else
    {
        price_to_pay = past_noon * 5 + base_price;
    }


    if(price_to_pay>=53){
        price_to_pay = 53;
    }

    printf("%d", price_to_pay);

    return 0;
}
