#include <stdio.h>

int main(void)
{

    /* Declarations */

    int     number = 0,
            index = 0;

    char    word[101];

    /* Input */

    scanf("%d %s", &number, word);

    for(index=0; index<number; index++)
    {
        printf("%s\n",word);
    }
    return 0;
}
