#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"


char OrientPiste(){
    char p; // caractere de recuperation pour indiquer la direction choisit par l'utilisateur
    int ok=0; //ok=false;


    do{
    printf("\n Selectionnez une direction : gauche (G), droite (D), haut (H), bas (B).\n");
    scanf("%c",&p);
     p=toupper(p);//met les lettre minuscules en majuscules
    fflush(stdin);

    if((p=='G')||(p=='D')||(p=='H')||(p=='B')){
            ok=1; //ok=true;
    }

    }while(ok==0);

    return p;

}
