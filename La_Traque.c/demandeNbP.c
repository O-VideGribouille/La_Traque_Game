#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

char Demande_nb_P(){

    //init nombre de pisteur
    int nb_P=0;
    int ok=0; //booleen ok=false;

    //boucle pour definir le nombre de joueur

    printf("\n Pour cette partie, combien souhaitez-cous de pisteur ?\n");
    printf("NOTE : Pour debuter, il est conseille de choisir une valeur entre 3 et le maximum de pisteurs, 10.\n");
    printf("Il est aussi possible de jouer avec un minimum d'un ou de deux pisteurs.\n");
    do{
        printf("\n Nombre de pisteur choisit : ");
        scanf("%d",&nb_P);

        if((nb_P<=0)||(nb_P>=11)){
                printf("Entree impossible, veuillez entrer une valeur entre 1 et 10\n");
                    ok=0;//false
            }else{
                ok=1;//true
            }

    }while(ok==0);
    system("cls");

    return nb_P;
}
