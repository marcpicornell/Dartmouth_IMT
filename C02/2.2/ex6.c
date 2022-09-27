#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     total = 0,
            expanses = 0;

    /* Input */
    while(expanses != -1)
    {
        scanf("%d", &expanses);
        total = total + expanses;
    }

    if(total == -1)
    {
            total = 0;
    }
    else
    {
            total = total + 1;
    }

    /* Output */

    printf("%d", total);

    return 0;
}
