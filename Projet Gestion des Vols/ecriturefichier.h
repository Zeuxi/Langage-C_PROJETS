#ifndef ECRITURE_H
#define ECRITURE_H
#include "Initstruct-2.h"
#include <stdio.h>

void ecriture_fichier(typePassager *e, char namefile[], int taille) {
    FILE *f = fopen(namefile, "w+");
    if(f == NULL) {
        printf("fichier inexistant");
    }
    else {
        for(int j = 0; j < taille; j++) {
            fprintf(f, "%s \n", e[j].nom);          
            fprintf(f, "%s \n", e[j].prenom);      
            fprintf(f, "%s \n", e[j].billet); 
            fprintf(f, "%.2f \t ", e[j].Poids_du_Passager);    
            fprintf(f, "Kg \n");  
            fprintf(f, "%.2f \t", e[j].Poids_Bagage_main);
            fprintf(f, "Kg \n");
            fprintf(f, "%.2f \t", e[j].Poids_Bagage_soute);
            fprintf(f, "Kg \n");
            fprintf(f, "--------------------\n");         
        }
    }
    fclose(f);
}

#endif