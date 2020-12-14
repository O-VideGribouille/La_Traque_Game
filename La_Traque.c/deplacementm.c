#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

//PROTOTYPES
//int RandomDrt(int jetD);
//int Direction(int jetD);
/*
//void Deplacement_M(char tabMnK[TAILLEH][TAILLEL], str_Pcara *Pcara, char tabJ[TAILLEH][TAILLEL], str_Mcara *Mcara){
void Deplacement_M(char tabMnK[TAILLEH][TAILLEL], char tabJ[TAILLEH][TAILLEL], str_Mcara *Mcara){

    int n_i, n_j; //boucles
    int n_x, n_y; //coordonees
   // int n_Ncoord; //coordonees
    int n_drct; //direction
    int ok=0; //booleen
    int jetD=0; //variabl servant au random de la position du Monk C

//system("cls");
//    tabMnK[Mcara.n_Mpos.n_My][Mcara.n_Mpos.n_Mx]=' ';
//    Affichage(plateau.map_Monk.tabMonk);
 //   system("pause");
    //do{
        //Etape 1 : Coordonees
        //nouvelles coordonnees
        do{
            srand(time(0));//evite que le random soit le meme a chaque premier jet
            n_drct=RandomDrt(jetD);
            if((n_drct<=0)||(n_drct>=5)){
                    ok=0;
            }else{
                ok=1;
            }
            fflush(stdin);
        }while(ok==0);

       // tabMnK=Direction(n_drct);


        ok=0;
        //printf("\n ok");

        //Etape 2 : emplacement deja prit
    //do{
        for(n_i=0 ; n_i<TAILLEH ; n_i++){
                for(n_j=0 ; n_j<TAILLEL ; n_j++){

                    //detection de traces d'un pisteur

                    //manger un pisteur
                    if((tabJ[n_y][n_x])==PISTEUR1){

                        ok=1; // ok=false;
                        tabJ[n_y][n_x]=' ';
                       // Pcara.n_Pvie=Pcara.n_Pvie-1; //regler le probleme de recupération de pointeur

                    //RAS
                    }else if((tabJ[n_y+n_j][n_x])!=PISTEUR1){
                        ok=0;
                    }
                }
        }
        if(ok==1){//si Monk C detecte un pisteur, il prend sa place
            printf("Monk C vient de devorer votre pisteur !\n");

        }


    //}while(ok==0);

    //Mcara->n_Mpos.n_Mx=n_x;
    //Mcara->n_Mpos.n_My=n_y;


   // system("pause");
    system("cls");
   // printf("Coordonnee x : %d, y : %d \n", n_x, n_y);
    tabMnK[n_y][n_x]=MONK;
    Affichage(plateau.map_Monk.tabMonk);
    system("pause");
}*/
/*
int RandomDrt( int jetD){
        jetD= (rand() %

           (4 - 1 + 1)) + 1;
       // printf("%d \n", jetD);

    return jetD;
}*/
/*
//changement entier en direction
int Direction(int n_drct, char tabMnK[TAILLEH][TAILLEL], struct str_Mcara Mcara){ //ajouter pointeur Mcara

    int k;

        switch(n_drct){

        //case 0 : k=' ';
            //break;
        case 1 : k=Mcara.n_Mpos.n_My+1; //coordonner de direction a suivre
            break;
        case 2 : k=tabMnK[Mcara.n_Mpos.n_My-1][Mcara.n_Mpos.n_Mx];
            break;
        case 3 : k=tabMnK[Mcara.n_Mpos.n_My][Mcara.n_Mpos.n_Mx+1];
            break;
        case 4 : k=tabMnK[Mcara.n_Mpos.n_Mx][Mcara.n_Mpos.n_Mx-1];
            break;

        default: printf("Rencontre Probleme\n");
    }
        return k;
}

*/
