#include <stdio.h>
#include "Candidat.h"
#include "init.h"
#ifndef afficher_H
#define afficher_H

void afficher(int n,typecandidat it[]){
	system("cls");	
	printf("\n\n\n\t\t\t------ Liste des candidats------\n\n\n");
	for(int i=1;i<=n;i++){
		printf("\t\t\tcandidat_%d\n\n",i);
		printf("\t\t\tNom: %s\n\n",it[i].nom);
		printf("\t\t\tPrenom: %s\n\n",it[i].prenom);
		printf("\t\t\tdate de naissance: %s/%s/%s \n\n",it[i].t.jour,it[i].t.mois,it[i].t.annee);
		printf("\t\t\tNumero matricule: %s\n\n",it[i].Id);
		printf("\t\t\tmoyenne: %2.f \n\n",it[i].moy);
		printf("\n\n\n\n");	
	}
	printf("\n\t\t\t\tAppuyez sur 'entrer' pour continuer........");
	getchar();
	getchar();
	system("cls");
	
	
}
#endif