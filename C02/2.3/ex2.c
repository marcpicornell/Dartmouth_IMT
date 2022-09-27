#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* Declaration */
    int total_name = 0,
        index;

    char    patron[101],
            first_name[101],
            last_name[101];

    /* Input */

    scanf("%d", &total_name);

    for(index=0; index< total_name; index++)
    {
        scanf("%s %s", first_name, last_name);

        printf("%s %s\n", last_name, first_name);


    }

    return 0;
}
