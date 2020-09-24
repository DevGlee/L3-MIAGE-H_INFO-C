#include <stdio.h>

int af_ensemble(char *af_ensembles)// Déclaration de la fonction
{

    int i, j, k, l, m = 0; //Déclaration des variables

    for (i = 0; i < 4; i++)
    {
        printf("%c", af_ensembles[i]); // ensemble avec 1 élément 
        i++;
        for (j = i + 1; j < 4; j++) // On parcours l'ensemble en incrémentant 1 élément
        {
            printf("%c %c\n", af_ensembles[i], af_ensembles[j]);// ensemble avec 2 éléments
            j++;

            for (k = j + 1; k < 4; k++)// On parcours l'ensemble en incrémentant 1 élément
            {
                printf("%c,%c,%c \n", af_ensembles[i], af_ensembles[j], af_ensembles[k]); // ensemble avec 3 éléments
                m++;

                for (l = k + 1; l < 4; l++)// On parcours l'ensemble en incrémentant 1 élément
                {
                    printf("%c,%c,%c,%c\n", af_ensembles[i], af_ensembles[j], af_ensembles[k], af_ensembles[l]); // ensemble avc 4 éléments
                    m++;
                }
            }
        }
    }

    return (m);
}
