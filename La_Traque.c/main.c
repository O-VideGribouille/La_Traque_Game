#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

int main()
{
    printf("La Traque\n \n");

    int nb_P=0; //initialisation à 0 du nombre de pisteur que l'on demandera

    //initialisation des valeur concernant les pisteurs, Monk C et d'autre valeurs.
    Init(&plateau, &nb_P);
    Mise_En_Place(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste, &nb_P);// positionnement des pisteur et de Monk C
    //début de la boucle de jeu
    do{

        Tour_De_Jeu(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste, &nb_P); //Jeu fonctionnel //problème se situant dans Tour de jeu -> Observation
        system("pause");

    }while(deadM==0);//se termine quand la vie de Monk C atteint 0
    //ou si le nombre de pisteurs atteint 0


    //Message suite à la condition de vistoire ou de defaite
    if(deadM==1){

        printf("Vous aves vaincu Monk C !");

    }else if(deadM==2){

        printf("Monk C a devore tout vos pisteurs, c'est perdu.");

    }

    return 0;
}
