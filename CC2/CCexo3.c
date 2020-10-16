
#include <stdio.h>

int Anagramme(char mot1[], char mot2[])
{
    int tab1[26] = {0}, tab2[26] = {0}, i = 0;

    while (mot1[i] != '\0')
    {
        tab1[mot1[i] - 'a']++;
        i++;
    }

    i = 0;

    while (mot2[i] != '\0')
    {
        tab2[mot2[i] - 'a']++;
        i++;
    }

    for (i = 0; i < 26; i++)
    {
        if (tab1[i] != tab2[i])
            return 0;
    }

    return 1;
}

int main()
{
    char mot1[100], mot2[100];

    printf("Entrez les deux mots\n");
    scanf("%s %s\n", mot1, mot2);

    if (Anagramme(mot1, mot2) == 1)
        printf("Les chaines %s et %s sont des anagrammes.\n", mot1, mot2);
    else
        printf("Les chaines %s et %s ne sont pas des anagrammes.\n", mot1, mot2);

    return 0;
}