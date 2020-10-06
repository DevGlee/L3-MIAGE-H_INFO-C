#include <stdio.h>

void remplirTableau(int *tab, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        *(tab + i) = 100 * i; //tab[i] <=> *(tab i+1)
    }
}

int main()
{
    int tabEntier[5]; // 5 cases mémoire dont lequel on peut acceder
    int taille = 5;
    int i;
    //tabEntier <=> &(tabEntier[0]) l'équivalent d'un pointeur sur un entier
    //

    tabEntier[0]= 50;
    tabEntier[1]= 240;

    printf("La valeur de tabEntier[0] est %d\n",*(tabEntier+0/*Equivaut à tabEntier[0]*/)); 
    printf("La valeur de tabEntier[1] est %d\n",*(tabEntier+1/*Equivaut à tabEntier[1]*/));
    printf("\n ==============\n");
    for (i = 0; i < taille; i++)
    {
        printf("tabEntier[%d] = %d\n", i, tabEntier[i]);
    }

    remplirTableau(tabEntier, taille);
    printf("\n=============\n");

    for (i = 0; i < taille; i++)
    {
        printf("tabEntier[%d] = %d\n", i, tabEntier[i]);
    }
    //printf("%p\n", chaine);
    //printf("%p\n", &chaine[0]);
    /*
   printf("Quel est votre prenom ?\n");

   scanf("%s", chaine);

   printf("Quel age avez vous ?\n");

   scanf("%d", &a);

   printf("Prenom => %s | Age => %d ans\n", chaine,a);

   */
    return 0;
}
