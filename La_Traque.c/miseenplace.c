#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"


void Mise_En_Place(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste, char tabMnK[TAILLEH][TAILLEL], struct str_Monk *Monk){

    int nb_P;
    nb_P=Demande_nb_P();

    if(nb_P==1){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n",nb_P);
        Positionnement_P(tabJ, &piste->pisteurs1);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, &Monk->MonkC);
    }
  /* if(nb_P==2){
        //position pisteurs
        printf("\nNombre de pisteurs : %d\n",nb_P);
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
     if(nb_P==3){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
   /* if(nb_P==4){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==5){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==6){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);
        Positionnement_P(tabJ, &piste->pisteurs6);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==7){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);
        Positionnement_P(tabJ, &piste->pisteurs6);
        Positionnement_P(tabJ, &piste->pisteurs7);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==8){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);
        Positionnement_P(tabJ, &piste->pisteurs6);
        Positionnement_P(tabJ, &piste->pisteurs7);
        Positionnement_P(tabJ, &piste->pisteurs8);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==9){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);
        Positionnement_P(tabJ, &piste->pisteurs6);
        Positionnement_P(tabJ, &piste->pisteurs7);
        Positionnement_P(tabJ, &piste->pisteurs8);
        Positionnement_P(tabJ, &piste->ppisteurs9);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }
    if(nb_P==10){
        //position pisteurs
        Positionnement_P(tabJ, &piste->pisteurs1);
        Positionnement_P(tabJ, &piste->pisteurs2);
        Positionnement_P(tabJ, &piste->pisteurs3);
        Positionnement_P(tabJ, &piste->pisteurs4);
        Positionnement_P(tabJ, &piste->pisteurs5);
        Positionnement_P(tabJ, &piste->pisteurs6);
        Positionnement_P(tabJ, &piste->pisteurs7);
        Positionnement_P(tabJ, &piste->pisteurs8);
        Positionnement_P(tabJ, &piste->ppisteurs9);
        Positionnement_P(tabJ, &piste->pisteurs10);

        //position Monk C
        Positionnement_M(tabMnK, tabJ, Monk.MonkC);
    }*/

//printf("entrer");

 }
