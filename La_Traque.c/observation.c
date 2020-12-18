#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//.h
#include "valeurs.h"

void Observation_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara){

    int n_i, n_j; //boucles
    char chr_c; //caractere de recuperation + actionnement de la fonction Tirer
    int ok; //booleen
    int numCase=1; // sert a la numerotation des case entourant le pisteurs
    int jetD=0; //recuperation de la valeur
    int VueMnK=0; //booleen

    if(Pcara->n_Pvie==1){

    printf("Vos pisteurs sont en phase d'observation, ils vous previendont si les cases voisines sont vides ou\n");
    printf("si au contraire quelque chose y est present.\n");
    printf("Si un pisteur vous indique que Monk C est dans l'une de ses cases voisines, appyer sur la touche 'T' pour tirer.\n");

    system("pause");

    printf("\n      Tout du pisteur %s\n", Pcara->chr_Pname);

    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR2; //Changement de visuel du pisteur en jeu
    Affichage(plateau.map_P.tabPiste);
    system("pause");

        //Etape 1 : verification autour du pisteur

           srand(time(0));//evite que le random soit le meme a chaque premier jet
            //Boucle pour verifier autour du pisteur
            //regard les neuf cas, dont le positionnement du pisteur qui sera toujours NUL


            //le probleme debute avec cette boucle
            for(n_i=Pcara->n_Ppos.n_Py-1; n_i<Pcara->n_Ppos.n_Py+2; n_i++){
                for(n_j=Pcara->n_Ppos.n_Px-1; n_j<Pcara->n_Ppos.n_Px+2; n_j++){


                        //verification de la presence de MONK C
                         if(tabMnK[n_i][n_j]==16){

                            printf("\nMonstre en vue !\n");
                            VueMnK=1; //permettra l'activation de la fonction Tirer
                            //a ete deplace pour voir si leprobleme ne venait pas de sa presence dans la boucle de verification



                          //verification d'empreintes //celles-ci n'ont pas encore etees mis en place, actuelemnt Test NUL
                       }else if((tabMnK[n_i][n_j]>=2)&&(tabMnK[n_i][n_j]<=15)){ //inverser le i et j ?

                            if((tabMnK[n_i][n_j]>=2)&&(tabMnK[n_i][n_j]<=5)){

                                printf("\nLa trace est ancienne, sa valeur est de %d\n en case %d", tabMnK[n_i][n_j], numCase);
                            }

                            if((tabMnK[n_i][n_j]>=6)&&(tabMnK[n_i][n_j]<=9)){

                                printf("\nLa trace est plus recente, sa valeur est de %d en case %d\n", tabMnK[n_i][n_j], numCase);
                            }

                            if((tabMnK[n_i][n_j]>=10)&&(tabMnK[n_i][n_j]<=13)){

                                printf("\nLa trace est bien plus fraiche ! Sa valeur est de %d en case %d\n", tabMnK[n_i][n_j], numCase);
                            }

                            if((tabMnK[n_i][n_j]==14)||(tabMnK[n_i][n_j]==15)){

                                printf("\nMonk C est tout proche ! La valeur est de %d en case %d\n", tabMnK[n_i][n_j], numCase);
                            }

                            //Si case vide
                        }else if(tabMnK[n_j][n_i]==0){

                            printf("\nRien en case %d \n", numCase);

                        }

                        numCase++;
                }

            }

    //Boucle permettant l'action de tir après la totalite des verifications des case autour du pisteur
    if(VueMnK == 1){
        do{
            printf("[T]irer !\n");
            scanf("%c", &chr_c);
            chr_c=toupper(chr_c);

            if(chr_c=='T'){
                Tirer(jetD, Mcara);
                ok=1;
                fflush(stdin);
            }else if(chr_c!='T'){
                ok=0;
            }

            if(Mcara->n_Mvie==0){
                deadM=1;
            }
        }while(ok==0);
    }

    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR1;
    system("pause");
    system("cls");
    }

}

//fonction permettant 40% de chance reussite de touche
void Tirer(int jetD, struct str_Mcara *Mcara){

      //lancement des deux dés
        jetD= (rand() %
           (10 - 0 + 1)) + 1;
        printf("Valeur aleatoire de : %d \n", jetD);
    //text en fonction de si l'on touche ou non le monstre
    if((jetD>=1)&&(jetD<=4)){
        printf("\n TOUCHE \n");
        Mcara->n_Mvie=Mcara->n_Mvie-1;

    }else{
        printf("\n RATE \n");

    }
      fflush(stdin);

}
