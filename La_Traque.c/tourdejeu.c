#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"


void Tour_De_Jeu(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste, int tabMnK[TAILLEH][TAILLEL], struct str_Monk *Monk, int *nb_P){

int n_vu;

    if(*nb_P==1){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);


        //Tour de jeu Monk C
        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
        //fonction trace du monstre
        /*
            -1 par tout où il y a une trace. Quand le monstre bouge
            orenne la valeur 17. S'il rebouge pour manger un pisteur

        */
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

   else if(*nb_P==0){
    deadM = 2;

   }


//printf("entrer");

 }
