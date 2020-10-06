#include <stdio.h>

void remplirTableau(int *tab, int size)  //Fonction qui nous permet de remplir un tableau 
{
    int i;
    for (i = 0; i < size; i++)   // On va parcourir le tableau 
    {
        *(tab + i) = 100 * i; //tab[i] <=> *(tab i+1) ainsi on incremente 100 à chaque indice 
    }
}

int main()
{
    int tabEntier[5]; // 5 cases mémoire dont lequel on peut acceder
    int taille = 5;
    int i;
    //tabEntier <=> &(tabEntier[0]) l'équivalent d'un pointeur sur un entier
    //

    tabEntier[0]= 50;  // on met la valeur 50 à l'indice 0 du tableau 
    tabEntier[1]= 240; //On met la valeur 240 à l'indice 1 du tableau 

    printf("La valeur de tabEntier[0] est %d\n",*(tabEntier+0/*Equivaut à tabEntier[0]*/)); 
    printf("La valeur de tabEntier[1] est %d\n",*(tabEntier+1/*Equivaut à tabEntier[1]*/));
    printf("\n ==============\n");
    for (i = 0; i < taille; i++) // On parcours le tableau 
    {
        printf("tabEntier[%d] = %d\n", i, tabEntier[i]);
    }

    remplirTableau(tabEntier, taille); // On fait appelle à la fonction  pour remplir notre tableau 
    printf("\n=============\n");

    for (i = 0; i < taille; i++) // On parcours le tableau cette fois ci il sera rempli grâce à la fonction appelé précédemment 
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
