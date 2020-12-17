#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//.h
#include "valeurs.h"


void Observation_M(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara, int *nb_P, int *n_vu){
   // int n_i, n_j; //boucles
    *n_vu=0;
//printf("\n VIe pisteur a %d \n", Pcara->n_Pvie);
printf("\nMonk C observe...\n");

    //HAUT
     if(((tabJ[Mcara->n_Mpos.n_My-1][Mcara->n_Mpos.n_Mx])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx;
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My-1;

                    Pcara->n_Pvie=Pcara->n_Pvie-1; //ote l'unique vie du pisteur


    //BAS
    }else if(((tabJ[Mcara->n_Mpos.n_My+1][Mcara->n_Mpos.n_Mx])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx;
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My+1;

                    Pcara->n_Pvie=Pcara->n_Pvie-1;

    //GAUCHE
    }else if(((tabJ[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx-1])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx-1;
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

                    Pcara->n_Pvie=Pcara->n_Pvie-1;


    //DROITE
    }else if(((tabJ[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx+1])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                        Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx+1;
                        Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

                       Pcara->n_Pvie=Pcara->n_Pvie-1;

                }



    if(*n_vu==1){
        printf("\nMonk C devore votre pisteur !\n");

    }else if(*n_vu==0){
        printf("\nMonk C n'a rien trouve.\n");

    }

    if(Pcara->n_Pvie==0){
        *nb_P=*nb_P-1;
    }

//system("pause");
    //system("cls");
    // printf("Coordonnee x : %d, y : %d \n", Mcara->n_Mpos.n_Mx, Mcara->n_Mpos.n_My);
   // printf("deadM vaut : %d", deadM);
    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=' ';
    tabMnK[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx]=MONK;

    system("pause");
    //system("cls");


}
