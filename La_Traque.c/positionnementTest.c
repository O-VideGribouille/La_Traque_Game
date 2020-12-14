#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

void Positionnement_Test(char tabJ[TAILLEH][TAILLEL], char tabMnk[TAILLEH][TAILLEL], struct str_Mcara *Mcara){

    int n_i, n_j; //boucles
    int n_x, n_y; //coordonees
   // char c;
    int ok=0; //booleen

    printf("\n TEST \n");
    Affichage(plateau.map_P.tabPiste);

    do{
        //Etape 1 : Coordonees
        //coordonnee de X
        do{

            printf("Coordonne X (maximum 26) : ");
            scanf("%d",&n_x);
            if((n_x<=0)||(n_x>=LMAX)){
                printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0;
            }else{
                ok=1;
            }
            fflush(stdin);
        }while(ok==0);

        //coordonnee de Y
        do{
            printf("Coordonne Y (maximum 12) : ");
            scanf("%d",&n_y);
            if((n_y<=0)||(n_y>=HMAX)){
                printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0;
            }else{
                ok=1;
            }
            fflush(stdin);
        }while(ok==0);


        ok=0;
        //printf("\n ok");

        //Etape 2 : emplacement deja prit
    //do{
        for(n_i=0 ; n_i<TAILLEH ; n_i++){
                for(n_j=0 ; n_j<TAILLEL ; n_j++){

                    if((tabJ[n_y][n_x])==PISTEUR1){

                    ok=0; // placement=false;
                   // printf("Emplacement impossible, il y a deja un pisteur a cette endroit !\n");
                   // printf("%d\n",ok);
                    }else if((tabJ[n_y][n_x])!=PISTEUR1){
                        ok=1;
                        //printf("%d\n",ok);
                    }
                }
        }
        if(ok==0){
            printf("Emplacement impossible, il y a deja un pisteur a cette endroit !\n");

        }/*else{
            printf("%d\n",ok);
        }*/

        //printf("%d\n",ok);


    }while(ok==0);

    Mcara->n_Mpos.n_Mx=n_x;
    Mcara->n_Mpos.n_My=n_y;

    system("pause");
    system("cls");
    printf("Coordonnee x : %d, y : %d \n", n_x, n_y);
    tabMnk[n_y][n_x]='M';
    Affichage(plateau.map_P.tabPiste);
    system("pause");
    system("cls");
}
