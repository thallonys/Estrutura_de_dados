#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "The book is on the table!!!";

    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    printf("%d ", i);
}