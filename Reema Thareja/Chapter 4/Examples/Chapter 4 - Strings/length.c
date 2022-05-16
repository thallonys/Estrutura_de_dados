#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i = 0;
    int length;

    system("cls || clear");
    printf("\n Enter the string: ");
    gets(str);
    while(str[i] != '\0')
    {
        i++;
    }
    length = i;
    printf("\nThe lenght of the string is: %d", length);
    getchar();
    return 0;
}