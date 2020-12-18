#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <time.h>
//.h
#include "valeurs.h"

//PROTOTYPES
int RandomDrt(int jetD);
void Trace(int tabMnK[TAILLEH][TAILLEL]);


void Deplacement_M(int tabMnK[TAILLEH][TAILLEL], char tabJ[TAILLEH][TAILLEL], str_Mcara *Mcara){

   // int n_i, n_j; //boucles
   // int n_x, n_y; //coordonees
  //  int n_dep; //coordonees
    int n_drct; //direction
    int ok=0; //booleen
    int jetD=0; //variabl servant au random de la position du Monk C


    printf("\nMonk C se deplace...\n");

 //   tabMnK[Mcara.n_Mpos.n_My][Mcara.n_Mpos.n_Mx]=' ';
//    Affichage(plateau.map_Monk.tabMonk);
 //   system("pause");
    Trace(tabMnK);//diminution de la valeur des traces
    do{
        //Etape 1 : nouvelles coordonnees
        do{
            srand(time(0));//evite que le random soit le meme a chaque premier jet
            n_drct=RandomDrt(jetD); //fonction pour obtenir un chiffre aleatoire
            if((n_drct<=0)||(n_drct>=5)){ //verification supplementaire au cas ou le chiffre depasse le nombre de direction
                    ok=0; //relance la boucle
            }else{
                ok=1; //clos la boucle
            }
            fflush(stdin);
        }while(ok==0);

        ok=0;

        //Etape 2 : emplacement deja prit
        //HAUT
        if((n_drct==1)&&((Mcara->n_Mpos.n_My-1>=0)&&(Mcara->n_Mpos.n_Mx-1<=TAILLEL-2))){

            ok=1;// ok=true;

            Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx;
            Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My-1;

        }

        //BAS
        if((n_drct==2)&&((Mcara->n_Mpos.n_My+1>=0)&&(Mcara->n_Mpos.n_Mx-1<=TAILLEL-2))){

            ok=1;// ok=true;

            Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx;
            Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My+1;

        }

        //GAUCHE
        if((n_drct==3)&&((Mcara->n_Mpos.n_Mx-1>=0)&&(Mcara->n_Mpos.n_Mx-1<=TAILLEL-2))){

            ok=1;// ok=true;

            Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx-1;
            Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

        }

        //DROITE
        if((n_drct==4)&&((Mcara->n_Mpos.n_Mx+1>=0)&&(Mcara->n_Mpos.n_Mx-1<=TAILLEL-2))){

            ok=1;// ok=true;

            Mcara->n_Mpos.n_Mx=Mcara->n_Mpos.n_Mx+1;
            Mcara->n_Mpos.n_My=Mcara->n_Mpos.n_My;

        }

    }while(ok==0);


    tabMnK[Mcara->n_Mpos.n_My][Mcara->n_Mpos.n_Mx]=MONK+1;

    system("pause");
    system("cls");
}

int RandomDrt( int jetD){
        jetD= (rand() %

           (4 - 1 + 1)) + 1;
       // printf("%d \n", jetD);

    return jetD;
}


void Trace(int tabMnK[TAILLEH][TAILLEL]){

    int n_i, n_j;

    for(n_i=0; n_i<TAILLEH; n_i++){
        for(n_j=0; n_j<TAILLEL; n_j++){

            if( tabMnK[n_i][n_j]>0){

               tabMnK[n_i][n_j]-=1;
            }

        }
    }

}
