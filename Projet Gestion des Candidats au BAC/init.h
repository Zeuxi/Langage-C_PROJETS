#include <stdio.h>
#include <stdlib.h>
#ifndef init_H
#define init_H
#include "Candidat.h"

void initial(int n,typecandidat it[]){
	system("cls");
	for(int i=1;i<=n;i++)
	{
		printf("\n\n\n\t\t\t\t*_*_*_*_*_Candidat %d*_*_*_*_*_",i);
		printf("\n\n\n\t\t\tveuillez entrer l'identifiant N%d: ",i);
		scanf("%s",it[i].Id);
		printf("\n\n\n\t\t\tveuillez entrer le nom N%d: ",i);
		scanf("%s",it[i].nom);
		printf("\n\n\n\t\t\tveuillez entrer le prenom N%d: ",i);
		scanf("%s",it[i].prenom);
		printf("\n\n\n\t\t\tveuillez le jour de naissance N%d: ",i);
		scanf("%s",it[i].t.jour);
		printf("\n\n\n\t\t\tveuillez le mois de naissance N%d: ",i);
		scanf("%s",it[i].t.mois);
		printf("\n\n\n\t\t\tveuillez l'annee de naissance N%d: ",i);
		scanf("%s",it[i].t.annee);
		moyenne:
		printf("\n\n\n\t\t\tveuillez entrer la moyenne du bac N%d: ",i);
		scanf("%f",&it[i].moy);
		while(it[i].moy<0 || it[i].moy>20){
			printf("\n\n\n\t\t\tMoyenne incorrecte... Reesayez\n\n");
			goto moyenne;
		}
		system("cls");
	}
	FILE * fi;
	fi=fopen("liste_bac.txt","a+");
	for(int i=1;i<=n;i++){
		fprintf(fi,"%s\n\n%s\n\n%s\n\n%s/%s/%s\n\n%.3f\n\n\n",it[i].nom,it[i].prenom,it[i].Id,it[i].t.jour,it[i].t.mois,it[i].t.annee,it[i].moy);
	}
	fclose(fi);
	
}
#endif
