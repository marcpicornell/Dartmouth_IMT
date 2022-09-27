#include <stdio.h>
#include <math.h>

int main(void)
{
    float cement;
    
    int bags_weight = 120;
    int bag_price = 45;
    int number_of_bags = 0;
    int total_price = 0;
    
    scanf("%f", &cement);
    
    number_of_bags = ceil(cement / bags_weight);
    total_price = number_of_bags * bag_price;
    
    printf("%d", total_price);
}