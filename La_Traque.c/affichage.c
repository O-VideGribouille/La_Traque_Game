#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"


extern void Affichage(char tabJ[TAILLEH][TAILLEL]){
//Affiche le visuel du plateau
  int n_i, n_j;

    for(n_i=0; n_i<TAILLEH; n_i++){
        for(n_j=0; n_j<TAILLEL; n_j++){

            printf("%c",tabJ[n_i][n_j]);
        }
        printf("\n");
    }


}
