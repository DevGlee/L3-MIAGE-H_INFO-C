#include <stdio.h>

int addition(int *x, int *y)
{

    return *x + *y;
}

void swap(int * x, int * y)  // Fonction de permutation de deux entiers en utilisant des pointeurs 
{

    int tmp = * x; // on crée une variable temporaire qui prendra la valeur du pointeur *x
    * x = * y;  // ainsi le pointeur *x va prendre la valeur du pointeur *y
    * y = tmp;  // et pour finir le pointeur *y prendra la valeur de la variable temporaire qui avait hérité de la valeur du pointeur *x
}

int main()
{

    int a = 12;

    int b = 26;

    printf("a = %d | b = %d\n", a, b);

    swap(&a, &b); // Appel de la fonction swap , "&" pour recuperer la valeur de l'entier pointeur sinon erreur 

    printf("SWAP...\n");

    printf("a = %d | b = %d\n", a, b);
    /*
    int res = addition(&a,&b);

    printf("a + b = %d\n", res); */
    return 0;
}