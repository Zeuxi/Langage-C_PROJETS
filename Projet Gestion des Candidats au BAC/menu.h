#include<stdio.h>
#include<stdlib.h>
#ifndef menu_H
#define menu_H
int menu(int choix){
	printf("\n\n\n\t\t\t\t\t*_*_*_*_*_*_*_*  Menu  *_*_*_*_*_*_*_*\n\n\n\n");
	printf("\t\t\t*_*_*_*_*_*_*_*	1__Saisir les informations des candidats		*_*_*_*_*_*_*_*\n\n");
	printf("\t\t\t*_*_*_*_*_*_*_*	2__Modifier les informations d'un candidat	*_*_*_*_*_*_*_*\n\n");
	printf("\t\t\t*_*_*_*_*_*_*_*	3__Afficher les informations des candidats	*_*_*_*_*_*_*_*\n\n");
	printf("\t\t\t*_*_*_*_*_*_*_* 4__Quitter le programme				*_*_*_*_*_*_*_*\n\n\n");
	printf("Option:	");
	scanf("%d",&choix);
	return choix;
}
#endif