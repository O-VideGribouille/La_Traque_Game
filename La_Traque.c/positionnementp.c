#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

void Positionnement_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara){

    int n_i, n_j; //boucles
    int n_x, n_y; //coordonees
    int ok=0; //booleen

    printf("\n      Tout du pisteur %s\n", Pcara->chr_Pname);
    Affichage(plateau.map_P.tabPiste);

    //Boucle de positionnement 1
    do{
        //Etape 1 : Coordonees
        //coordonnee de X
        do{

            printf("Coordonne X (maximum 27) : ");
            scanf("%d",&n_x); //entrer des coordonnees de X
            if((n_x<=0)||(n_x>=LMAX)){ //limitation des valeurs possibles
                printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0; // ok=false
            }else{
                ok=1; //ok=true;
            }
            fflush(stdin);
        }while(ok==0);

        //coordonnee de Y
        do{
            printf("Coordonne Y (maximum 12) : ");
            scanf("%d",&n_y); //entrer des coordonnees de Y
            if((n_y<=0)||(n_y>=HMAX)){ //limitation des valeurs possibles
                printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0; // ok=false
            }else{
                ok=1; //ok=true;
            }
            fflush(stdin);
        }while(ok==0);


        ok=0;

        //Etape 2 : emplacement deja prit ou non
        for(n_i=0 ; n_i<TAILLEH ; n_i++){
                for(n_j=0 ; n_j<TAILLEL ; n_j++){

                    if((tabJ[n_y][n_x])==PISTEUR1){ //placement deja prit pas un pisteur

                        ok=0; // placement=false;

                    }else if((tabJ[n_y][n_x])!=PISTEUR1){ //placement libre

                        ok=1;
                    }
                }
        }
        if(ok==0){

            printf("Emplacement impossible, il y a deja un pisteur a cette endroit !\n");
        }

    }while(ok==0);

    Pcara->n_Ppos.n_Px=n_x; // Mise-a-jour des nouvelles coordonnees
    Pcara->n_Ppos.n_Py=n_y; // Mise-a-jour des nouvelles coordonnees

    system("pause"); //Met un temps d'arret au jeu
    system("cls"); // RAfraichit l'ecran
    printf("Coordonnee x : %d, y : %d \n", n_x, n_y); //visualisation des coordonnee du pisteur en tour
    tabJ[n_y][n_x]=PISTEUR1; // Association des coordonnee a un caractere visible
    Affichage(plateau.map_P.tabPiste); //Mise a jour de l'affichage suite aux modifications
    system("pause"); //Met un temps d'arret au jeu
    system("cls"); // RAfraichit l'ecran
}
