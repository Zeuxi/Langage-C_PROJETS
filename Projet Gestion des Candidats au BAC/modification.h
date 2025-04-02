#include <stdio.h>
#include <stdlib.h>
#include "Candidat.h"
#include "init.h"
#ifndef modifiaction_H
#define modification_H
#include "Candidat.h"
#include <string.h>

void modifier(typecandidat it[] ,char *ID,int n){
	system("cls");	
	printf("\n\n\n\t\t\t____*Veuillez entrer le matricule*____: ");
	scanf("%s",ID);
		printf("\n\n\n\n");
	for(int i=1;i<=n;i++)
	{
		if(strcmp(it[i].Id,ID)== 0){
			
		moyenne:
		printf("\t\t\tcandidat_%d\n\n",i);
		printf("\t\t\tNom: %s\n\n",it[i].nom);
		printf("\t\t\tPrenom: %s\n\n",it[i].prenom);
		printf("\t\t\tdate de naissance: %s/%s/%s \n\n",it[i].t.jour,it[i].t.mois,it[i].t.annee);
		printf("\t\t\tNumero matricule: %s\n\n",it[i].Id);
		printf("\t\t\tmoyenne: %3.f \n\n",it[i].moy);
		printf("\n\n\n");
		printf("Appuyez sur 'entrer' pour poursuivre les modifications\n\n\n");
			getchar();
			getchar();
			
			printf("\t\t\tveuillez entrer le nom: ");
			scanf("%s",it[i].nom);
			printf("\t\t\tveuillez entrer le prenom: ");
			scanf("%s",it[i].prenom);
			printf("\t\t\tveuillez entrer le numero matricule: ");
			scanf("%s",it[i].Id);
			printf("\t\t\tveuillez entrer la date: ");
			printf("\t\t\t\t\tJour:");
			scanf("%s",it[i].t.jour);
			printf("\t\t\t\t\tMois:");
			scanf("%s",it[i].t.mois);
			printf("\t\t\t\t\tAnnee:");
			scanf("%s",it[i].t.annee);
			printf("\t\t\tveuillez entrer la nouvelle moyenne: ");
			scanf("%f",&it[i].moy);
			if(it[i].moy<0 || it[i].moy>20){
				printf("\t\t\tMoyenne incorrecte... Reesayez\n\n");
				goto moyenne;
			}
			
			printf("Informations modifiees avec succes....");
		}else{
			printf("Candicat non detecte \n");
		}	
	}
	
}
#endif
