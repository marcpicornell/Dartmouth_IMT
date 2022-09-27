#include <stdio.h>

int main(void)
{
    int population;
    float growth, percent;
    
    scanf("%d", &population);
    scanf("%f", &growth);
    
    percent = (float)population / 100 * growth;
    printf("%d", (int)percent+population);    
}