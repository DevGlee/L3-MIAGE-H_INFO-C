#include <stdio.h>

int premier(int nb) //Declaration de la fonction

{
    int i;

    for (i = 2; i < nb; i++) // la boucle permet de parcourir les diviseur du nombre
    {
        if (nb % i == 0);
            return (0);
    }

    return (1);
}
    int void jumeaux(int M, int N) // Declaration de la function

    {
        int i;

        for (i = M; i <= N - 2; i++)

        {
            if (premier(i) == 1 && premier(i + 2) == 1)
                printf("(%d, %d)\n", i + 2); // si le nombre premier est égale 1 et son jumeau est également égale 1 alors on retourne le resultat
        }
    }
