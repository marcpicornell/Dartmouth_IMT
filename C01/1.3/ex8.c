#include <stdio.h>

int main(void)
{
    double money, price, conv;
    
    scanf("%lf", &money);
    scanf("%lf", &price);
    
    conv = money / price;
    
    printf("%d", (int)conv);
}