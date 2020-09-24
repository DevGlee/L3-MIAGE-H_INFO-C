#include <stdio.h>

int main() //Declaration de la fonction
{
    int nb, i, som = 0; //Declaration des variables

    printf("Entrer un entier s'il vous plait\n");

    scanf("%d", &nb);        // On demande a l'utilisateur de saisir l'entier
    for (i = 1; i < nb; i++) // ici on va utiliser i pour parcourir les diviseurs de nb
    {
        if (nb % i == 0) // on utilise le modulo pour verifier si le calcul est égale a 0
        {
            som = som + i; // ainsi on additionne les diviseurs de nb
        }
    }

    if (som == nb) // si la somme des diviseurs sont égales à nb
    {
        printf(" %d est un nombre parfait", nb);
    }
    else
    {
        printf("%d n'est pas un nombre parfait", nb);
    }

    return 0; // Fin du programme
}