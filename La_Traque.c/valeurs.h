#ifndef VALEURS_H_INCLUDED
#define VALEURS_H_INCLUDED

//CONSTENTES
#define TAILLEH 14 //taille plateau
#define TAILLEL 29 //taille plateau

#define HMAX 13 //valeur maximum a entrer pour positionnementp
#define LMAX 28 //valeur maximum a entrer pour positionnementp

#define RANDOMLMAX 26
#define RANDOMHMAX 12

#define PVIE 1 //nombre de vie des pisteurs
#define MVIE 4 // noombre de vie de Monk C

#define MONK 16 //représentation visuel de Monk C
#define PISTEUR1 'P' //Représentation visuel de pisteur fixe
#define PISTEUR2 '!' //Représentation visuel de pisteur en observation
#define PISTEUR3 '?' //Représentation visuel de pisteur en attente de nouvelles coordonees
#define PMIN 1 //valeur minimum de pisteur
#define PMAX 10 // valeur maximum de pisteur

//STRUCTURES

//Coordonnees des pisteurs et de Monk C
typedef struct str_coord{
    int n_Px; //Horizontale - Pisteurs
    int n_Py; //Verticale - Pisteurs

    int n_Mx; //Horizontale - Monk C
    int n_My; //Verticale - Monk C

}str_coord;

//Caracteristiques - Pisteurs
typedef struct str_Pcara{

    int n_Pvie; //nombre de vie
    str_coord n_Ppos; //position
    char *chr_Pname; // nom

}str_Pcara;

//Caracteristiques - Monk C
typedef struct str_Mcara{

    int n_Mvie; //nombre de vie
    str_coord n_Mpos; //position
    char *chr_Mname; // nom

}str_Mcara;

//possibilité du nombre de pisteurs
typedef struct str_Pisteurs{
    //variable par pisteur jouable
    str_Pcara pisteurs1;
    str_Pcara pisteurs2;
    str_Pcara pisteurs3;
    str_Pcara pisteurs4;
    str_Pcara pisteurs5;
    str_Pcara pisteurs6;
    str_Pcara pisteurs7;
    str_Pcara pisteurs8;
    str_Pcara pisteurs9;
    str_Pcara pisteurs10;

}str_Pisteurs;

// Monk C regroupement possibilite
typedef struct str_Monk{

    str_Mcara MonkC;

}str_Monk;

//tableaux
typedef struct str_map{
    //tableau plateau visible
    char tabPiste[TAILLEH][TAILLEL];
    //tableau plateau invisible
    int tabMonk[TAILLEH][TAILLEL];

}str_map;

//Composition plateau
typedef struct str_plateau{

    str_map map_P; //entree tableau visible
    str_map map_Monk; //entree tableau invisible
    str_Pisteurs n_p; // entree numero pisteur
    str_Monk antagoniste; // entree Monk C

}str_plateau;

    str_plateau plateau;

//VARIABLES
int deadM;//booleen

//PROTOTYPES
void Init(struct str_plateau *plateau, int *nb_P);
void Affichage(char tabJ[TAILLEH][TAILLEL]);
int Demande_nb_P(int *nb_P);
void Positionnement_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara);
void Positionnement_M(int tabMnK[TAILLEH][TAILLEL], char tabJ[TAILLEH][TAILLEL], struct str_Mcara *Mcara);
void Mise_En_Place(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste, int tabMnK[TAILLEH][TAILLEL], struct str_Monk *Monk, int *nb_P);
void Tour_De_Jeu(char tabJ[TAILLEH][TAILLEL], struct str_Pisteurs *piste, int tabMnK[TAILLEH][TAILLEL], struct str_Monk *Monk, int *nb_P);
void Observation_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara);
void Deplacement_P(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara);
void Observation_M(char tabJ[TAILLEH][TAILLEL], struct str_Pcara *Pcara, int tabMnK[TAILLEH][TAILLEL], struct str_Mcara *Mcara, int *nb_P, int *n_vu);
void Deplacement_M(int tabMnK[TAILLEH][TAILLEL], char tabJ[TAILLEH][TAILLEL], str_Mcara *Mcara);

int entier(char chr_x);
void Tirer(int jetD, struct str_Mcara *Mcara);
char OrientPiste();

#endif // VALEURS_H_INCLUDED
