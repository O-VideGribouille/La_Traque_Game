
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//.h
#include "valeurs.h"

void Deplacement_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara){

    int n_dep; //augmentation ou diminution d'un coordonnee
    char c; // sert pour la direction
    int ok=0; //booleen

  if(Pcara->n_Pvie==1){

    printf("\n      Tout du pisteur %s\n", Pcara->chr_Pname);
    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR3; //Changement de visuel du pisteur en jeu
    Affichage(plateau.map_P.tabPiste);
    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=' ';//efface le pisteur de sa derniere position

    do{
        //Etape 1 : choix de la direction
        c=OrientPiste(); //fonction qui demande la direction (gauche, haut, etc)

        //Etape 2 : nombre de pas
        do{

            printf("Nombre de pas (minimum 0 - maximum 4) : ");
            scanf("%d",&n_dep);
            if((n_dep<0)||(n_dep>=5)){

                printf("\nDeplacement impossible, valeur trop basse ou trop haute.\n");
                ok=0;
            }else{

                ok=1;
            }
            fflush(stdin);

        }while(ok==0);

        ok=0;

        //Etape 3 : verification si emplacement deja prit
        //en fonction de l'orientation choisit

        //Gauche
        if((c=='G')&&((Pcara->n_Ppos.n_Px-n_dep>=0)&&(Pcara->n_Ppos.n_Px-n_dep<=TAILLEL-2))){
            if(tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px-n_dep]==PISTEUR1){

                    ok=0; // ok=false;
                }else if((tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px-n_dep])!=PISTEUR1){

                        ok=1; //ok=true
                }
        }

        //Droite
       else if((c=='D')&&((Pcara->n_Ppos.n_Px+n_dep>=0)&&(Pcara->n_Ppos.n_Px+n_dep<=TAILLEL-2))){
            if(tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px+n_dep]==PISTEUR1){

                    ok=0; // ok=false;
                }else if((tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px+n_dep])!=PISTEUR1){

                        ok=1; //ok=true
                }
        }

        //Haut
       else if((c=='H')&&((Pcara->n_Ppos.n_Py-n_dep>=0)&&(Pcara->n_Ppos.n_Py-n_dep<=TAILLEH-2))){
            if(tabJ[Pcara->n_Ppos.n_Py-n_dep][Pcara->n_Ppos.n_Px]==PISTEUR1){

                    ok=0; // ok=false;
                }else if((tabJ[Pcara->n_Ppos.n_Py-n_dep][Pcara->n_Ppos.n_Px])!=PISTEUR1){

                        ok=1; // ok=true
                    }
        }

        //Bas
       else if((c=='B')&&((Pcara->n_Ppos.n_Py+n_dep>=0)&&(Pcara->n_Ppos.n_Py+n_dep<=TAILLEH-2))){
            if(tabJ[Pcara->n_Ppos.n_Py+n_dep][Pcara->n_Ppos.n_Px]==PISTEUR1){

                    ok=0; // ok=false;
                }else if((tabJ[Pcara->n_Ppos.n_Py+n_dep][Pcara->n_Ppos.n_Px])!=PISTEUR1){

                        ok=1; // ok=true
                    }
        }




        if(ok==0){
            printf("\nEmplacement impossible, il y a soit deja un pisteur, soit il y avait un risque de sortir de la map\n");
        }

    }while(ok==0);



        //Etape 4 : Changement de visuel
        //Gauche
   if(c=='G'){

        Pcara->n_Ppos.n_Px=Pcara->n_Ppos.n_Px-n_dep;
        Pcara->n_Ppos.n_Py=Pcara->n_Ppos.n_Py;

    }
    else if(c=='D'){

        Pcara->n_Ppos.n_Px=Pcara->n_Ppos.n_Px+n_dep;
        Pcara->n_Ppos.n_Py=Pcara->n_Ppos.n_Py;

    }

    else if(c=='H'){

        Pcara->n_Ppos.n_Px=Pcara->n_Ppos.n_Px;
        Pcara->n_Ppos.n_Py=Pcara->n_Ppos.n_Py-n_dep;

    }

    else if(c=='B'){

        Pcara->n_Ppos.n_Px=Pcara->n_Ppos.n_Px;
        Pcara->n_Ppos.n_Py=Pcara->n_Ppos.n_Py+n_dep;

    }


    system("cls");
    printf("Coordonnee x : %d, y : %d \n", Pcara->n_Ppos.n_Px, Pcara->n_Ppos.n_Py);
    tabJ[Pcara->n_Ppos.n_Py][Pcara->n_Ppos.n_Px]=PISTEUR1;

    Affichage(plateau.map_P.tabPiste);
    system("pause");
    system("cls");

    }
}

