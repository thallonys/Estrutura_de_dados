#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char Dest_Str[100], Source_Str[100];
    int i = 0, j = 0;
    
    system("cls || clear");

    printf("Enter de source string: ");
    gets(Source_Str);

    printf("Enter de destination string: ");
    gets(Dest_Str);

    while (Dest_Str[i] != '\0')
    {
        i++;
    }
    while (Source_Str[i] != '\0')
    {
        Dest_Str[i] = Source_Str[i];
        i++;
        j++;
    }

    Dest_Str[i] = '\0';

    printf("After appending, the destination string is: ");
    
    puts(Dest_Str);
    
    getchar();
}