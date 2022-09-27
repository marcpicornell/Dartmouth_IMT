#include <stdio.h>

int main(void)
{

    /* Declarations */
    int ingredients[10],
        id,
        index;

    /* Input */
    for(index=0;index<10;index++)
    {
            scanf("%d", &ingredients[index]);
    }

            scanf("%d", &id);

            printf("%d", ingredients[id]);


    return 0;
}
