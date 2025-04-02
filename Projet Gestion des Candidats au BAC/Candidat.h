#include<stdio.h>
#ifndef candidat_H
#define candidat_H

typedef struct date dateN;
struct date{
	char jour[20];
	char mois[20];
	char annee[20];
};

typedef struct candidat typecandidat;
struct candidat{
	char Id[10];
	char nom[25];
	char prenom[25];
	dateN t;
	float moy;

	
};
#endif

