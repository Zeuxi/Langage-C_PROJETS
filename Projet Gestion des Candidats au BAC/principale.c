#include <stdio.h>
#include <stdlib.h>
#include "Candidat.h"
#include "init.h"
#include "afficher.h" 
#include "modification.h"
#include <string.h>
#include "menu.h"

int main() {
	int choix,n;
	int rep;
	typecandidat it[250];
	char ID[25];
	menu:
	switch(menu(choix)){
		case 1:{
			system("cls");
			printf("\n\n\n\t\t\tveuillez entrer le nombre de candidat a enregistrer :  ");
			scanf("%d",&n);
			while(n<0 || n>250){
				printf("\n\nNombre de candidats incorrect .. Veuillez reessayer(250 candidats au maximum pour le jury)");
				printf("\n\nveuillez entrer le nombre de candidat a enregistrer :  ");
				scanf("%d",&n); 
			}
			initial(n,it);
			goto menu;
			break;
		}
		case 2:{
			modifier(it,ID,n);
			goto menu;
			break;
		}
		case 3:{
			afficher(n,it);
			goto menu;
			break;
		}
		case 4:{
			exit(-1);
			break;
		}
		default:{
			system("cls");
			printf("\n\n\n\t\t\t\votre choix est invalide!!! Appuyez sur 'entrer' pour continuer....");
			getchar();
			getchar();
			goto menu;
			break;
		}
	}
	return 0;
}