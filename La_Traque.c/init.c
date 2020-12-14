#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

extern void Init(struct str_plateau *plateau){

    //init du plateau du jeu
    int n_i, n_j;
    char caractere;
    //initn tab Pisteurs en Caracteres
    for(n_i=0; n_i<TAILLEH; n_i++){
        for(n_j=0; n_j<TAILLEL; n_j++){

           if(n_i==0){
                caractere='*';
            }
            if(n_i==13){
                caractere='*';
            }
             if(n_j==0){
                caractere='*';
            }

            if(n_j==28){
                caractere='*';
            }

           else if((n_i!=0)&&(n_j!=0)&&(n_i!=13)&&(n_j!=28)){
                caractere=' ';
            }
            //caractere='*';

            plateau->map_P.tabPiste[n_i][n_j]=caractere;
           // plateau->map_Monk.tabMonk[n_i][n_j]=caractere;


        }
    }
    //initn tab Monk C en Entier
    for(n_i=0; n_i<TAILLEH; n_i++){
        for(n_j=0; n_j<TAILLEL; n_j++){

           if(n_i==0){
                caractere=-1;
            }
            if(n_i==13){
                caractere=-1;
            }
             if(n_j==0){
                caractere=-1;
            }

            if(n_j==28){
                caractere=-1;
            }

           else if((n_i!=0)&&(n_j!=0)&&(n_i!=13)&&(n_j!=28)){
                caractere=0;
            }

            plateau->map_Monk.tabMonk[n_i][n_j]=caractere;


        }
    }

    //init des pisteur
    //nombre de pisteur
    //int nb_Pist=0;

    //init de leur vie
    int n_pVie=PVIE;
    plateau->n_p.pisteurs1.n_Pvie=n_pVie;
    plateau->n_p.pisteurs2.n_Pvie=n_pVie;
    plateau->n_p.pisteurs3.n_Pvie=n_pVie;
    plateau->n_p.pisteurs4.n_Pvie=n_pVie;
    plateau->n_p.pisteurs5.n_Pvie=n_pVie;
    plateau->n_p.pisteurs6.n_Pvie=n_pVie;
    plateau->n_p.pisteurs7.n_Pvie=n_pVie;
    plateau->n_p.pisteurs8.n_Pvie=n_pVie;
    plateau->n_p.pisteurs9.n_Pvie=n_pVie;
    plateau->n_p.pisteurs10.n_Pvie=n_pVie;

    //init de leur nom
    plateau->n_p.pisteurs1.chr_Pname=("1");
    plateau->n_p.pisteurs2.chr_Pname=("2");
    plateau->n_p.pisteurs3.chr_Pname=("3");
    plateau->n_p.pisteurs4.chr_Pname=("4");
    plateau->n_p.pisteurs5.chr_Pname=("5");
    plateau->n_p.pisteurs6.chr_Pname=("6");
    plateau->n_p.pisteurs7.chr_Pname=("7");
    plateau->n_p.pisteurs8.chr_Pname=("8");
    plateau->n_p.pisteurs9.chr_Pname=("9");
    plateau->n_p.pisteurs10.chr_Pname=("10");




    //init Monk C
    //init vie
    int n_mVie= MVIE;
    plateau->antagoniste.MonkC.n_Mvie=n_mVie;
    //init nom
    plateau->antagoniste.MonkC.chr_Mname=("Monk C");

    //init booleen condition de victoire
    deadM = 0;//booleen

}
