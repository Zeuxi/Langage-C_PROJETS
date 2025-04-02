#ifndef Struct_h
#define Struct_h

//Definition de la structure//

typedef struct Passager typePassager;

typedef struct Passager {

char billet[20];
char nom[30];
char prenom[20];
float  Poids_du_Passager;
float Poids_Bagage_main;
float Poids_Bagage_soute;
float poidstotal;
}typePassager;


#endif