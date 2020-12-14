#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"


void Tour_De_Jeu(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste, int tabMnK[TAILLEH][TAILLEL], struct str_Monk *Monk){
//void Tour_De_Jeu(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste){

    int nb_P;
   // nb_P=Demande_nb_P();

   // if(nb_P==1){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n",nb_P);
        //tabJ[piste->pisteurs1.n_Ppos.n_Py][piste->pisteurs1.n_Ppos.n_Px]=PISTEUR2; // faire attention au positionnement de n_y et n_x !

        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);

        //Observation_P();

        //deplacement pisteur
        //Deplacement_M(tabMnK, &piste , tabJ, &Monk->MonkC);
       // Deplacement_M(tabMnK, tabJ, &Monk->MonkC);

        //deplacement Monk C
       // Positionnement_M(tabMnK, tabJ, &Monk->MonkC);
   // }


//printf("entrer");

 }
