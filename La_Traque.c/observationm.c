#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//.h
#include "valeurs.h"
void Trace(int tabMnK[TAILLEH][TAILLEL]);

void Observation_M(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara, int *nb_P, int *n_vu){
    *n_vu=0; // booleen ok=false

printf("\nMonk C observe...\n");

    //HAUT
     if(((tabJ[Mcara->n_Mpos.n_My-1][Mcara->n_Mpos.n_Mx])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1; // ok=true

                    Trace(tabMnK);//diminution de la valeur des traces

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx; // Mise-a-jour des nouvelles coordonnees
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My-1; // Mise-a-jour des nouvelles coordonnees
                    //en fonction de la direction, le dépacement se codé differament

                    Pcara->n_Pvie=Pcara->n_Pvie-1; //ote l'unique vie du pisteur


    //BAS
    }else if(((tabJ[Mcara->n_Mpos.n_My+1][Mcara->n_Mpos.n_Mx])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Trace(tabMnK);//diminution de la valeur des traces

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx;
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My+1;

                    Pcara->n_Pvie=Pcara->n_Pvie-1;

    //GAUCHE
    }else if(((tabJ[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx-1])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Trace(tabMnK);//diminution de la valeur des traces

                    Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx-1;
                    Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

                    Pcara->n_Pvie=Pcara->n_Pvie-1;


    //DROITE
    }else if(((tabJ[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx+1])==PISTEUR1)){
                    //manger un pisteur
                    *n_vu=1;

                    Trace(tabMnK);//diminution de la valeur des traces

                        Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx+1;
                        Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

                       Pcara->n_Pvie=Pcara->n_Pvie-1;

                }



    if(*n_vu==1){
        printf("\nMonk C devore votre pisteur !\n");

    }else if(*n_vu==0){
        printf("\nMonk C ne trouve rien.\n");

    }
    // Permettra au pisteur hors-jeu de ne pas joueur leur tour  //Une des parties de condition de defaite
    if(Pcara->n_Pvie==0){
        *nb_P=*nb_P-1;
    }

    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=' ';
    tabMnK[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx]=MONK+1;

    system("pause");

}
