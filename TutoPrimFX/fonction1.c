#include <stdio.h>

/* Structure d'une fonction C 

type_de_retour nom(parametre1, parametre2, parametre3,...){

    corps_de_la_fonction

    return valeur_de_la_fonction

}
*/

void afficherBonjour()
{
    printf("Bonjour\n");
    printf("Bonjour\n");
}

int carre(int n)
{
    return n * n;
}

int maximum(int a, int b)
{
    int max;

    if (a > b)
    {
        max = a; //return a;
    }
    else
    {
        max = b; //return b;
    }

    return max;
}

int int main()
{
    int a;
    int b;
    int res;

    //printf("Saisissez le nombre dont vous voulez le carre");
    printf("Une premieur valeur a");
    scanf("%d", &a);
    printf("Une deuxieme valeur b");
    scanf("%d", &b);
    //res = carre(a);
    printf("Maximum entre a: %d et b: %d : %d\n", a, b, maximum(a, b));
    //printf(" %d^(2) = %d\n", a, res);
    //afficherBonjour();

    return 0;
}