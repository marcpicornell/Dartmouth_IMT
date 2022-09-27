#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int red, yellow, green, dice, counter;
    int dice_total =0;
    int total = 0;
    int i = 0;
    
    float average;

    scanf("%d", &dice);

    for(counter=dice;counter>0;counter--)
    {
            i = i+1;
            scanf("%d %d %d", &red, &yellow, &green);
            dice_total = green * 100 + yellow * 10 + red;
            total = total + dice_total;
            average = (float)total / i;
            printf("%d. you rolled: %d, current average: %.1f\n", i, dice_total, average);

    }
    return 0;
}
