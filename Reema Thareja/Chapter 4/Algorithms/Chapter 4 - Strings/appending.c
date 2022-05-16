#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int j = 0;
    char destStr[] = {0};
    char sourceStr[] = "The book is on the table!!!";

    system("cls || clear");

    while (destStr[i] != '\0')
    {
        i++;
    }

    while (sourceStr[j] = '\0')
    {
        destStr[i] = sourceStr[j];
        i++;
        j++;
    }

    // destStr[i] = '\0';

    printf("%s", destStr);
    // getchar();

}
