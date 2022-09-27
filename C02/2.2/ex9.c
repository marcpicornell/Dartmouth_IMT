#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    /* Declaration */
    
    int max_safe_temperature = 0;
    int min_safe_temperature = 0;
    int temperatures;

    scanf("%d %d", &min_safe_temperature, &max_safe_temperature);

    while (temperatures >= min_safe_temperature || temperatures <= max_safe_temperature)
    {
        scanf("%d", &temperatures);
        if (temperatures == -999)
        {
            break;
        }
        else if (temperatures < min_safe_temperature || temperatures > max_safe_temperature)
        {
            printf("Alert!\n");
        }
        else
        {
            printf("Nothing to report\n");
        }
    }
  
    


    
    

    
}