#include <stdio.h>

int main(void)
{
    int number_of_passengers = 0;

    float cost_of_gas = 0;
    float cost_of_trip = 0;

    scanf("%d %f", &number_of_passengers, &cost_of_gas);

    if( number_of_passengers == 0 )
    {
        cost_of_trip = cost_of_gas;
    }
    else
    {
        cost_of_trip = ( cost_of_gas + 1 ) / ( number_of_passengers + 1 );
    }
    printf("%.2f", cost_of_trip);
}
