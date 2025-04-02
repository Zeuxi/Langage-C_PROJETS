#ifndef Initstruct_h
#define Initstruct_h
#define MAX 200
#include "Struct-2.h"
#include "verificationpoid-1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typePassager *Initialisation_Passager(typePassager *P, int taille) {
    int button;
    for(int j = 0; j < taille; j++) {
        printf("\n=== Passager %d ===\n", j+1);
        printf("Entrez le nom du passager %d : \t", j+1);
        scanf("%s", P[j].nom);
        printf("Entrez le prenom du passager %d : \t", j+1);
        scanf("%s", P[j].prenom);
        printf("Entrez le numero du billet du passager %d : \t", j+1);
        scanf("%s", P[j].billet);
        printf("Entrez le poids du passager %d (kg) : \t", j+1);
        scanf("%f", &P[j].Poids_du_Passager);
        getchar();
        printf("Entrez le poids (kg) des bagages en main du passager %d : \t", j+1);
        scanf("%f", &P[j].Poids_Bagage_main);
        getchar();
        printf("Entrez le poids (kg) des bagages en soute du passager %d : \t", j+1);
        scanf("%f", &P[j].Poids_Bagage_soute);
        getchar();
        
        // Appel de la fonction de vérification
        verification(P, j);
    }
    printf("appuyer sur 1 effacer et revneir au menu");
     scanf("%d",&button);
     if(button==1){
        system("cls");
     }
    return P;
    
}

#endif