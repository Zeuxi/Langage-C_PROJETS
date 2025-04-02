#ifndef Verificationpoid-1_H
#define Verificationpoid-1_H
#include <stdio.h>
#include "Struct-2.h"
#include "Initstruct-2.h"

void verification(typePassager *passager, int position) {
    float Poids_total_bagage;
    do {
        Poids_total_bagage = passager[position].Poids_Bagage_main + passager[position].Poids_Bagage_soute;
        
        if(Poids_total_bagage > 25) {
            printf("\nAttention ! Le poids total des bagages (%.2f kg) dépasse 25 kg pour le passager %d\n", Poids_total_bagage, position+1);
            printf("Veuillez resaisir les poids des bagages :\n");
            
            printf("Poids des bagages en main (kg) : ");
            scanf("%f", &passager[position].Poids_Bagage_main);
            getchar();
            
            printf("Poids des bagages en soute (kg) : ");
            scanf("%f", &passager[position].Poids_Bagage_soute);
            getchar();
        }
    } while(Poids_total_bagage > 25);
}

#endif