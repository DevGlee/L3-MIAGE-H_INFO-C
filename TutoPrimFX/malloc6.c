#include <stdio.h> 
#include <stdlib.h>

int main() {
    //int a = 10;
    int *pa= malloc(sizeof(int));

    if (pa == NULL)
    {
        printf("Erreur malloc ! || L'allocation de la mémoire à échoué\n");
        return 1;
    }

    *pa=10;
    printf("Adresse de pa: %p\n ", pa);
    printf("Valeur a l'adresse de pa : %d\n", *pa);

    free(pa);
    return 0;
}