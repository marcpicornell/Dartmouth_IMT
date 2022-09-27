#include <stdio.h>
#include <stdlib.h>

int min(int num1,int num2);

int main(void)
{
    int range;
    scanf("%i", &range);
    int lowest = 0;
    int minimum;
    int number[range];

    scanf("%i", &number[0]);
    scanf("%i", &number[1]);
    lowest = min(number[0], number[1]);
    
    for (int i = 2; i < range; i++)
    {
        scanf("%i", &number[i]);
        minimum = min(number[i], number[i-2]);
        if (minimum <= lowest)
        {
            lowest = minimum;
        } 
    }
    printf("%i\n", lowest);
}


int min(int num1,int num2)
{
    if (num1 >= num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
    
}