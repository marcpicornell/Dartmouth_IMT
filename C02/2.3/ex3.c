#include <stdio.h>
#include <string.h>

int main(void)
{

    /* Declarations */

    char    name[51];


    /* Input */

    scanf("%s", name);

    /* Logic */
    if(strlen(name)%2 == 0)
    {
        printf("1");
    }
    else
    {
       printf("2");
    }

    /* Output */

    return 0;
}
