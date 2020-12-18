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
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==2){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);

        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);


        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }
    else if(*nb_P==3){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);


        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }
    else if(*nb_P==4){
        //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);


        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==5){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);

        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }


    }

    else if(*nb_P==6){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);
        //Tour de jeu pisteur 6
        Observation_P(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs6);


        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==7){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);
        //Tour de jeu pisteur 6
        Observation_P(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs6);
        //Tour de jeu pisteur 7
        Observation_P(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs7);

        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==8){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);
        //Tour de jeu pisteur 6
        Observation_P(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs6);
        //Tour de jeu pisteur 7
        Observation_P(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs7);
        //Tour de jeu pisteur 8
        Observation_P(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs8);

        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==9){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);
        //Tour de jeu pisteur 6
        Observation_P(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs6);
        //Tour de jeu pisteur 7
        Observation_P(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs7);
        //Tour de jeu pisteur 8
        Observation_P(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs8);
        //Tour de jeu pisteur 9
        Observation_P(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs9);

        //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

    else if(*nb_P==10){

            //position pisteur
        printf("\nNombre de pisteurs : %d\n", *nb_P); // rappel du nombre total depisteur


        //Tour de jeu pisteur 1
        Observation_P(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs1);
        //Tour de jeu pisteur 2
        Observation_P(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs2);
        //Tour de jeu pisteur 3
        Observation_P(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs3);
        //Tour de jeu pisteur 4
        Observation_P(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs4);
        //Tour de jeu pisteur 5
        Observation_P(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs5);
        //Tour de jeu pisteur 6
        Observation_P(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs6);
        //Tour de jeu pisteur 7
        Observation_P(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs7);
        //Tour de jeu pisteur 8
        Observation_P(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs8);
        //Tour de jeu pisteur 9
        Observation_P(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs9);
        //Tour de jeu pisteur 10
        Observation_P(tabJ, &piste->pisteurs10, tabMnK, &Monk->MonkC);
        Deplacement_P(tabJ, &piste->pisteurs10);

         //Tour de jeu Monk C

        Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        Observation_M(tabJ, &piste->pisteurs10, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        //si Monk C ne voit / mange personne, il se deplace et observe a nouveau
        if(n_vu==0){
            Deplacement_M(tabMnK, tabJ, &Monk->MonkC);
            Observation_M(tabJ, &piste->pisteurs1, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs2, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs3, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs4, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs5, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs6, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs7, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs8, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs9, tabMnK, &Monk->MonkC, nb_P, &n_vu);
            Observation_M(tabJ, &piste->pisteurs10, tabMnK, &Monk->MonkC, nb_P, &n_vu);
        }
    }

   else if(*nb_P==0){
    deadM = 2;

   }


//printf("entrer");

 }
