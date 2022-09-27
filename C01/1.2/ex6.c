#include <stdio.h>

int main(void)
{
    int number_of_robot = 0;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int total_power = 0;
    int i;


    scanf("%d", &number_of_robot);

    for(i=0;i<number_of_robot;i++)
        {
            scanf("%d%d%d%d", &height, &weight, &enginePower, &resistance);
            total_power = total_power + ((enginePower + resistance) * (weight - height));
        }
    printf("%d", total_power);
}