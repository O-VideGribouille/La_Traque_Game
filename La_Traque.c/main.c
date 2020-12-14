#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

int main()
{
    printf("La Traque\n \n");


    Init(&plateau);
    Affichage(plateau.map_P.tabPiste);
    Mise_En_Place(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste);// positionnement des pisteur et de Monk C
    //début de la boucle de jeu
  //  do{
   //printf("x: %d , y: %d", plateau.n_p.pisteurs1.n_Ppos.n_Px, plateau.n_p.pisteurs1.n_Ppos.n_Py );
    //printf("\nx M: %d , y M: %d", plateau.antagoniste.MonkC.n_Mpos.n_Mx, plateau.antagoniste.MonkC.n_Mpos.n_My );
        Tour_De_Jeu(plateau.map_P.tabPiste, &plateau.n_p, plateau.map_Monk.tabMonk, &plateau.antagoniste);
        system("pause");

  //  }while(deadM==0);//se termine quand la vie de Monk C atteint 0
    //ou si le nombre de pisteur atteint 0

    if(deadM==1){

        printf("Vous aves vaincu Monk C !");
    }else if(deadM==2){

        printf("Monk C a devore tout vos pisteur, c'est perdu.");

    }

    return 0;
}
