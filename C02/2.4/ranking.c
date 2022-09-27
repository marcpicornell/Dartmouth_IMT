#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int number_of_students = 0;
    scanf("%d", &number_of_students);

    char firstname[number_of_students][50];
    int grade[number_of_students];
    int rank[number_of_students];
    int a;

    // get grade
    for (int i = 0; i < number_of_students; i++)
    {
        scanf("%d", &grade[i]);
        rank[i] = 1;
    }
    

    // get name
    for (int j = 0; j < number_of_students; j++)
    {
        scanf("%s", firstname[j]);
    }

    // compute ranking
    for (int k = 0; k < number_of_students; k++)
    {
        for (int l = 0; l < number_of_students; l++)
        {
            // write the algorithm here (sort ascending order)
        }        
    }
    

    // display result
 
    for (int m = 0; m < number_of_students; m++)
    {

        printf("Firstname: %s - Grade: %i - Rank: %i\n", firstname[m], grade[m], rank[m]);
        
    }
    
    /*
    // display result
    for (int l = 0; l < number_of_students; l++)
    {
        printf("%s rank is %i\n", firstname[l], rank[l]);
    }
    */


    return 0;
}

