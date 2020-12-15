#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

void Observation_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara){
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
    int VueMnK=0;

    printf("Vos pisteurs sont en phase d'observation, ils vous previendont si les cases voisines sont vides ou\n");
    printf("si au contraire quelque chose y est present.\n");
    printf("Si un pisteur vous indique que Monk C est dans l'une de ses cases voisines, appyer sur la touche 'T' pour tirer.\n");

    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR2;
    Affichage(plateau.map_P.tabPiste);

        //Etape 1 : verification autour du pisteur

           // int voisincase=1;
           srand(time(0));//evite que le random soit le meme a chaque premier jet
            //Boucle pour verifier autour du pisteur
            //regard les neuf cas, dont le positionnement du pisteur qui sera toujours NUL


            //le probleme debute avec cette boucle
           // for(n_i=Pcara->n_Ppos.n_Py-1; n_i<Pcara->n_Ppos.n_Py+2; n_i++){
             //   for(n_j=Pcara->n_Ppos.n_Px-1; n_j<Pcara->n_Ppos.n_Px+2; n_j++){
            for(n_i=Pcara->n_Ppos.n_Py-1; n_i<Pcara->n_Ppos.n_Py+2; n_i++){
                for(n_j=Pcara->n_Ppos.n_Px-1; n_j<Pcara->n_Ppos.n_Px+2; n_j++){


                        //verification de la presence de MONK C
                         if(tabMnK[n_i][n_j]==16){

                            printf("\nMonstre en vue ! [T]irer !\n");
                            printf("\n En case %d \n", numCase);
                            VueMnK=1; //permettra l'activation de la fonction Tirer
                            //a ete deplace pour voir si leprobleme ne venait pas de sa presence dans la boucle de verification
                           /* scanf("%c", &chr_c);
                            chr_c=toupper(chr_c);

                            n_recp=Tirer(jetD, Mcara);
                            fflush(stdin);

                            if(Mcara->n_Mvie==0){
                                deadM=1;
                            } */

                          //verification d'empreintes //celles-ci n'ont pas encore etees mis en place, actuelemnt Test NUL
 /*                      }else if((tabMnK[n_i][n_j]>=2)&&(tabMnK[n_i][n_j]<=15)){ //inverser le i et j ?

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

                            //Si case vide
                       */ }else if(tabMnK[n_j][n_i]==0){

                            printf("\nRien en case %d \n", numCase);

                        }

                        numCase++;

                      //  system("pause");
                        //system("cls");

                }

            }

    //Boucle permettant l'action de tir après la totalite des verifications des case autour du pisteur
    if(VueMnK == 1){
        scanf("%c", &chr_c);
        chr_c=toupper(chr_c);

        n_recp=Tirer(jetD, Mcara);
        fflush(stdin);

        if(Mcara->n_Mvie==0){
            deadM=1;
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

//fonction permettant 40% de chance reussite de touche
int Tirer(int jetD, struct str_Mcara *Mcara){

      //lancement des deux dés
        jetD= (rand() %
           (10 - 0 + 1)) + 1;
        printf("%d \n", jetD);
    //text en fonction de si l'on touche ou non le monstre
    if((jetD>=1)&&(jetD<=4)){
        printf("\n TOUCHE \n");
        Mcara->n_Mvie=Mcara->n_Mvie-1;

    }else{
        printf("\n RATE \n");

    }
      fflush(stdin);

    return jetD;

}
