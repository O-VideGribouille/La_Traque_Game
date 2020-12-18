#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//.h
#include "valeurs.h"

//PROTOTYPES
int RandomL(int jetD);
int RandomH(int jetD);

void Positionnement_M(int tabMnK[TAILLEH][TAILLEL], char tabJ[TAILLEH][TAILLEL], struct str_Mcara *Mcara){

    int n_i, n_j; //boucles
    int n_x, n_y; //coordonees
    int ok=0; //booleen
    int jetD=0; //variabl servant au random de la position du Monk C

    // Boucle de positionnement 2
    do{
        //Etape 1 : Coordonees Random
        //coordonnee de X
        do{
            srand(time(0));//evite que le random soit le meme a chaque premier jet
            n_x=RandomL(jetD); //Fonction pour une valeur aleatoire
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
            srand(time(0)); //evite que le random soit le meme a chaque premier jet
            n_y=RandomH(jetD); //Fonction pour une valeur aleatoire
            if((n_y<=0)||(n_y>=HMAX)){ //limitation des valeurs possibles
                printf("Emplacement impossible, veuillez entrer des coordonees existantes\n");
                    ok=0; // ok=false
            }else{
                ok=1; //ok=true;
            }
            fflush(stdin);
        }while(ok==0);


        ok=0; // ok=false

        //Etape 2 : emplacement deja prit
        for(n_i=0 ; n_i<TAILLEH ; n_i++){
                for(n_j=0 ; n_j<TAILLEL ; n_j++){

                    if((tabJ[n_y][n_x])==PISTEUR1){ //placement deja prit pas un pisteur

                        ok=0; // placement=false;
                    }else if((tabJ[n_y+n_j][n_x])!=PISTEUR1){ //placement libre

                        ok=1;
                    }
                }
        }
        if(ok==0){
            printf("Emplacement impossible, il y a deja un pisteur a cette endroit !\n");

        }

    }while(ok==0);

    Mcara->n_Mpos.n_Mx=n_x; // Mise-a-jour des nouvelles coordonnees
    Mcara->n_Mpos.n_My=n_y; // Mise-a-jour des nouvelles coordonnees

    system("cls");
    tabMnK[n_y][n_x]=MONK; // Association des coordonnee a une valeur
    system("pause");
}
//Fonction d'une valeur random pour X
int RandomL( int jetD){

        jetD= (rand() %
           (RANDOMLMAX - 1 + 1)) + 1;
        printf("%d \n", jetD);

    return jetD;
}
//Fonction d'une valeur random pour Y
int RandomH( int jetD){

        jetD= (rand() %
           (RANDOMHMAX - 1 + 1)) + 1;
        printf("%d \n", jetD);

    return jetD;
}

