#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100], copy_str[100];
    char *pstr, *pcopy_str;

    pstr = str;
    pcopy_str = copy_str;

    system("cls || clear");
    
    printf("Enter the string: ");
    gets(str);

    while (*pstr != '\0')
    {
        *pcopy_str = *pstr;
        pstr++, pcopy_str++;
    }

    *pcopy_str = '\0';

    printf("The copied text is: ");
    while (*pcopy_str != '\0')
    {
        printf("%c", *pcopy_str);
        pcopy_str++;
    }

}