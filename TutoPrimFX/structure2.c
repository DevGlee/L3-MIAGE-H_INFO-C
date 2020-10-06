#include <stdio.h>
#include <string.h>

//Definition de la structure par l'alias " Livre " pour faciliter l'utilisation des structures
typedef struct {
    char titre[100];
    char auteur[100];
    int annee;
}Livre;

void afficherLivre( Livre livre){

    // Fonction qui affiche les informations du livre demandé
    printf("===========\n");
    printf("Titre : %s\n", livre.titre);
    printf("Auteur : %s\n", livre.auteur);
    printf("Annee: %d\n", livre.annee);
    printf("===========");
}


int main()
{      
    //DECLARATION DES LIVRES
     //Livre livre1;
     //Livre livre2;

    //DECLARATION DE LA BIBLIOTHEQUE CONTENANT LES LIVRES
    Livre bibliotheque[100];
    int NbLivres;
    int i;

    //Premier livre de la bibliotheque d'indice 0
    bibliotheque[0].annee=1997;
    strcpy(bibliotheque[0].titre, "Harry Potter");
    strcpy(bibliotheque[0].auteur, "JK Rowling");
    NbLivres++;

    //Deuxieme livre de la bibliotheque d'indice 1
    bibliotheque[1].annee=1943;
    strcpy(bibliotheque[1].titre, "Le petit Prince");
    strcpy(bibliotheque[1].auteur, "Antoine de Saint Exupery");
    NbLivres++;

    //Deuxieme livre de la bibliotheque d'indice 2
    bibliotheque[2].annee=1862;
    strcpy(bibliotheque[2].titre, "Les Miserables");
    strcpy(bibliotheque[2].auteur, "Annie Chourau");
    NbLivres++;
    
    //Boucle pour parcourir la bibliotheque de livre
    for ( i = 0; i < NbLivres; i++)
    {
        afficherLivre(bibliotheque[i]);
    }
    
    return 0;
}
