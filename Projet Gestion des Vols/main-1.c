#include <stdio.h>
#include <stdlib.h>
#include "Struct-2.h"
#include "Initstruct-2.h"
#include "verificationpoid-1.h"
#include "ecriturefichier.h"
#include "recherfichier.h"

int main() {
    typePassager *h = (typePassager*)malloc(MAX * sizeof(typePassager));
    char nomvol[30];
    char recherche[30];
    int nommbrepassager;
    int choix;
    int continuer = 1; 

    while (continuer) {
        printf("\n==============TABLEAU DE BORD============\n");
        printf("||\t");
        printf("1- Initialiser Nouveau vol\t");
        printf("||\n");
        printf("||\t");
        printf("2- Recherche Ancien vol\t\t");
        printf("||\n");
        printf("||\t");
        printf("3- Quitter\t\t\t");
        printf("||\n");
        printf("==========================================\n");
        printf("Entrez votre choix :\t");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1:
                printf("Entrez le nom du vol en cours : \t");
                scanf("%s", nomvol);
                getchar();
                printf("Entrez le nombre de passagers :\t");
                scanf("%d", &nommbrepassager);
                getchar();
                
                // Initialisation du tableau de passager
                Initialisation_Passager(h, nommbrepassager);
                // Écriture des informations dans le fichier
                ecriture_fichier(h, nomvol, nommbrepassager);
                
                printf("\nOpération terminée. Retour au menu principal...\n");
                break;
                
            case 2:
                printf("Entrez le nom du fichier : ");
                scanf("%s", recherche);
                getchar();
                recherche_vol(recherche, NULL);
                printf("\nRecherche terminée. Retour au menu principal...\n");
                break;
            case 3:
                printf("Au revoir !\n");
                continuer = 0; 
                break;
                
            default:
                printf("Choix non valide. Veuillez réessayer.\n");
                break;
        }
    }

    free(h); 
    return 0;
}