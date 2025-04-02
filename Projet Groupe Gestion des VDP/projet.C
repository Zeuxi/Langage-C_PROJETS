/*
    ____MEMBRE DU GROUPE____

        OUEDRAOGO TOUNDASIDA ALEX ROMEO
        KINI IVES
        KABORE FRANK
*/  


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Volontaire
{
    char Nom[20];
    char Prenom[20];
    char Region[50];
    int Age;
    int ID;
}VDP;

int AjoutVDP(VDP TAB[],int n);
void AffichageVDP(VDP TAB[],int n);
void SearchVDP(VDP tab[], int n,char name[]);
int DeleteVDP(VDP tab[], int n,int val);

int n=0;

int main()
{
    
    int choice;
    char continu,answer;
    VDP TAB[2];
    
 do
 {

    printf("\n");

    printf("\t\t\t[******BIENVENU DANS NOTRE APPLICATION DE GESTION DES VDP******]\n");

    printf("\n");

    printf("\t\tVEUILLEZ ENTREZ LE NUMERO DE L'OPERATION QUE VOUS SOUHAITE EFFECTUER :\n");

    printf("\n");

    printf("\t1:AJOUTER UN VOLONTAIRE\n\t2:AFFICHAGE DES VOLONTAIRES\n\t3:RECHERCHER UN VOLONTAIRE\n\t4:SUPPRESSION D'UN VOLONTAIRE\n\t5:QUITTER L'APPLICATION\n");
    
    scanf("%d",&choice);
    
 switch (choice){
 case 1:
    n=AjoutVDP(TAB, n);
    break;

 case 2:
    AffichageVDP(TAB, n);
    break;

 case 3:
 {
    char name[20];
    printf("Entrez le nom du VDP que vous recherche:\n");
    scanf("%s",name);
    SearchVDP(TAB, n, name);
 } 
 break;

 case 4:
 {
    int Val;
    printf("\tEntrez l'identifiant du VDP que vous voulez supprimer:\n");
    scanf("%d",&Val);
    n=DeleteVDP(TAB, n, Val);
 }
 break;
 case 5:
   printf("\n\n\t\t\t***** AUREVOIR ET MERCI DE VOUS ETES INSCRIT *****\n");
   printf("\n");
   printf("\n\t\t\t***** LA PATRIE OU LA MORT, NOUS VAINCRONS ***\n");
   continue;
    break;

 default:
    printf("\tSaisis incorrecte\n");
  }

   if (choice != 5) {
            printf("\n\t\tVoulez-vous effectuer une autre operation ? (O/N) : ");
            scanf(" %c", &continu);
           
            if (continu=='O' || continu=='o') {
                system("cls"); 
            }else if (continu=='N' || continu=='n'){
                printf("\n\n\t\t\t***** AUREVOIR ET MERCI DE VOUS ETES INSCRIT *****\n");
                printf("\n");
                printf("\n\t\t\t***** LA PATRIE OU LA MORT, NOUS VAINCRONS ***\n");
            }
        }
    
       
 }while (continu=='O' || continu=='o');

     printf("\n");

     return 0;

}
 
    
int AjoutVDP(VDP TAB[],int n)
{
    int i,ajout;
    printf("Entrez le nombre de VDP que vous voulez enregistrer:\n");
    scanf("%d",&ajout);
    for (i=0;i<ajout;i++)
    {
        printf("\tEntrez le nom du VDP %d:\n",n+1);
        scanf("%s",TAB[n].Nom);
        printf("\tEntrez le prenom du VDP %d:\n",n+1);
        scanf("%s",TAB[n].Prenom);
        printf("\tEntrez la region d'origine du VDP %d:\n",n+1);
        scanf("%s",TAB[n].Region);
        printf("\tEntrez l'age du VDP(entier) %d:\n",n+1);
        scanf("%d",&TAB[n].Age);
        printf("\tEntrez le numero d'identification unique du VDP(entier) %d:\n",n+1);
        scanf("%d",&TAB[n].ID);
        n++;
        system("cls");
    } 
      printf("Volontaire ajoute avec succes\n");
    return n;
}

void AffichageVDP(VDP TAB[],int n){
    int i;
    for (i=0;i<n;i++)
    {
       printf("\nNom:%s\tPrenom:%s\tRegion:%s\tAge:%d ans\tNumero d'identification:%d\n",TAB[i].Nom,TAB[i].Prenom,TAB[i].Region,TAB[i].Age,TAB[i].ID);
    } 
}

void SearchVDP(VDP TAB[], int n,char name[]) 
{
    int i;
    for (i=0;i<n;i++)
    {
      if(strcmp(TAB[i].Nom,name)==0)
      {
        printf("\nResultat de la recherche:\n");
        printf("\nNom:%s\tPrenom:%s\tRegion:%s\tAge:%d\tNumero d'identification:\n",TAB[i].Nom,TAB[i].Prenom,TAB[i].Region,TAB[i].Age,TAB[i].ID);
      }else
      {
        printf("\nVolontaire introuvable.\n");
      }
    }
     
}

int DeleteVDP(VDP TAB[], int n,int Val){
    for (int i=0;i<n;i++) {
        if (TAB[i].ID==Val) {
            for (int j = i; j < n - 1; j++) {
                TAB[j] = TAB[j + 1];
            }
            n--;
            printf("\nVolontaire supprime avec succes.\n");
        }else
        {
            printf("\nIdentifiant incorrecte.Suppression impossible.\n");
        }
           
    }
       
    return n;
}  