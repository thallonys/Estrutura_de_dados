#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "The book is on the table!!!";
    char upperstr[] = {0};
    int i = 0;

    system("cls || clear");

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            upperstr[i] = str[i] - 32;
        }
        else
        {
            upperstr[i] = str[i];
        }

        i++;
    }

    printf("%s \n", upperstr);


}
