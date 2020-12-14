#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

void Observation_P(char tabJ[TAILLEH][TAILLEL], str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara){
//void Observation_P(){

//printf("entrer");

    int n_i, n_j; //boucles
    //int n_x, n_y; //coordonees
    char chr_c;
    int n_recp;
   // char chr_x;
   // int ok=0; //booleen
    int numCase=1;
    int jetD=0;

    printf("Vos pisteurs sont en phase d'observation, ils vous previendont si les cases voisines sont vides ou\n");
    printf("si au contraire quelque chose y est present.\n");
    printf("Si un pisteur vous indique que Monk C est dans l'une de ses cases voisines, appyer sur la touche 'T' pour tirer.\n");

    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR2;
    Affichage(plateau.map_P.tabPiste);

        //Etape 1 : verification autour du pisteur

           // int voisincase=1;

            for(n_i=Pcara->n_Ppos.n_Py-1; n_i<Pcara->n_Ppos.n_Py+2; n_i++){
                for(n_j=Pcara->n_Ppos.n_Px-1; n_j<Pcara->n_Ppos.n_Px+2; n_j++){


                        if(tabMnK[n_i][n_j]==16){

                            printf("\nMonstre en vue ! [T]irer !\n");
                            scanf("%c", &chr_c);
                            chr_c=toupper(chr_c);

                            n_recp=Tirer(jetD, Mcara);
                            fflush(stdin);

                            if(Mcara->n_Mvie==0){
                                deadM=1;
                            }

                        }else

                        //chr_x=entier(chr_x);

                        if((tabMnK[n_i][n_j]>=2)&&(tabMnK[n_i][n_j]<=15)){ //inverser le i et j

                               // printf("Tour %d", n_i);

                            if((tabMnK[n_i][n_j]>=2)&&(tabMnK[n_i][n_j]<=5)){

                                printf("\nLa trace est ancienne, sa valeur est de\n");

                            }

                            if((tabMnK[n_i][n_j]>=6)&&(tabMnK[n_i][n_j]<=9)){

                                printf("\nLa trace est plus recente, sa valeur est de\n");

                            }

                            if((tabMnK[n_i][n_j]>=10)&&(tabMnK[n_i][n_j]<=13)){

                                printf("\nLa trace est bien plus fraiche ! Sa valeur est de\n");

                            }

                            if((tabMnK[n_i][n_j]==14)||(tabMnK[n_i][n_j]==15)){

                                printf("\nMonk C est tout proche ! La valeur est de\n");

                            }

                        }else

                        if((tabMnK[n_j][n_i]==0)){

                            printf("\nRien en case %d \n", numCase);

                        }

                        numCase++;

                      //  system("pause");
                        //system("cls");

                }

            }








   // Pcara->n_Ppos.n_Px=n_x;
   // Pcara->n_Ppos.n_Py=n_y;

    system("pause");
    system("cls");
  //  printf("Coordonnee x : %d, y : %d \n", n_x, n_y);
    //tabJ[n_y][n_x]=PISTEUR1;
    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR1;
    Affichage(plateau.map_P.tabPiste);
    system("pause");
    system("cls");

}

int Tirer(int jetD, struct str_Mcara *Mcara){

      //lancement des deux dés
        jetD= (rand() %
           (10 - 0 + 1)) + 1;
        printf("%d \n", jetD);

    if((jetD>=1)&&(jetD<=4)){
        printf("\n TOUCHE \n");
        Mcara->n_Mvie=Mcara->n_Mvie-1;

    }else{
        printf("\n RATE \n");

    }

    return jetD;

}
