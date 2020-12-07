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

    for(n_i=0; n_i<TAILLEL; n_i++){
        for(n_j=0; n_j<TAILLEH; n_j++){

            if((n_i==0)){
                caractere='*';
            }
            if(((n_j==0)&&(n_i!=0))||((n_j==0)&&(n_i=TAILLEL))){
                caractere='*';
            }
            else if((n_i!=0)&&(n_j!=0)){
                caractere=' ';
            }


        }
    }

    //init des pisteur
    //init de leur vie
    plateau->n_p.pisteurs1.n_Pvie=PVIE;
    plateau->n_p.pisteurs2.n_Pvie=PVIE;
    plateau->n_p.pisteurs3.n_Pvie=PVIE;
    plateau->n_p.pisteurs4.n_Pvie=PVIE;
    plateau->n_p.pisteurs5.n_Pvie=PVIE;
    plateau->n_p.pisteurs6.n_Pvie=PVIE;
    plateau->n_p.pisteurs7.n_Pvie=PVIE;
    plateau->n_p.pisteurs8.n_Pvie=PVIE;
    plateau->n_p.pisteurs9.n_Pvie=PVIE;
    plateau->n_p.pisteurs10.n_Pvie=PVIE;

    //init de leur nom
    plateau->n_p.pisteurs1.chr_Pname="1";
    plateau->n_p.pisteurs2.chr_Pname="2";
    plateau->n_p.pisteurs3.chr_Pname="3";
    plateau->n_p.pisteurs4.chr_Pname="4";
    plateau->n_p.pisteurs5.chr_Pname="5";
    plateau->n_p.pisteurs6.chr_Pname="6";
    plateau->n_p.pisteurs7.chr_Pname="7";
    plateau->n_p.pisteurs8.chr_Pname="8";
    plateau->n_p.pisteurs9.chr_Pname="9";
    plateau->n_p.pisteurs10.chr_Pname="10";




    //init Monk C
    //init vie
    plateau->antagoniste.MonkC.n_Mvie=MVIE;
    //init nom
    plateau->antagoniste.MonkC.chr_Mname="Monk C";

}
