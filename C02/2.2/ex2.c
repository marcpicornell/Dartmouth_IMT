#include <stdio.h>

int main(void)
{

    /* Declarations */
    int cars,
        index;

    double  weight[50],
            total_weight,
            average;

    /* Input */
    scanf("%d", &cars);

    for(index=0;index<cars;index++)
    {
        scanf("%lf", &weight[index]);
        total_weight = total_weight + weight[index];
    }

    /* Logic */

    average = total_weight / cars;

    /* Output */

    for(index=0;index<cars;index++)
    {
        printf("%.1lf\n", average - weight[index]);
    }

    return 0;
}
