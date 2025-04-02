#ifndef RECHERCHE_H
#define RECHERCHE_H
#include "Struct-2.h"
#include "Initstruct-2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recherche_vol(char nomfichier[], typePassager *R ){
    int button;
    printf("%s",nomfichier);
    FILE *fichier = fopen(nomfichier, "r");
    if(fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier '%s'\n", nomfichier);
        return;
    }

    printf("\n=== Contenu du fichier '%s' ===\n", nomfichier);
    char ligne[256];
    while(fgets(ligne, sizeof(ligne), fichier)) {
        printf("%s", ligne);
    }

    fclose(fichier);
    printf("\n=== Fin du fichier ===\n");
     printf("appuyer sur 1 effacer et revenir au menu");
     scanf("%d",&button);
     if(button==1){
        system("cls");
     }
    
}

#endif