#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

int main()
{
    printf("La Traque\n \n");

    int nb_P=0;

    Init(&plateau, &nb_P);
    //Affichage(plateau.map_P.tabPiste);
    Mise_En_Place(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste, nb_P);// positionnement des pisteur et de Monk C
    //début de la boucle de jeu
    do{

        Tour_De_Jeu(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste, &nb_P); //problème se situant dans Tour de jeu -> Observation
        system("pause");

    }while(deadM==0);//se termine quand la vie de Monk C atteint 0
    //ou si le nombre de pisteur atteint 0

    if(deadM==1){

        printf("Vous aves vaincu Monk C !");

    }else if(deadM==2){

        printf("Monk C a devore tout vos pisteurs, c'est perdu.");

    }

    return 0;
}
