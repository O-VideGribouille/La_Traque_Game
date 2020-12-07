#ifndef VALEURS_H_INCLUDED
#define VALEURS_H_INCLUDED

//CONSTENTES
#define TAILLEL 29
#define TAILLEH 14
#define PVIE 1
#define MVIE 4
#define MONK 'M'
#define PISTEUR1 'P'
#define PISTEUR2 '?'
#define PISTEUR3 '!'
#define PMIN 1
#define PMAX 10

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

    int n_Pvie;
    str_coord n_Ppos;
    char chr_Pname;

}str_Pcara;

//Caracteristiques - Monk C
typedef struct str_Mcara{

    int n_Mvie;
    str_coord n_Mpos;
    char chr_Mname;
}str_Mcara;

//possibilité du nombre de pisteurs
typedef struct str_Pisteurs{

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

typedef struct str_map{

    char tabPiste[TAILLEH][TAILLEL];
    char tabMonk[TAILLEH][TAILLEL];

}str_map;

typedef struct str_plateau{

    str_map map_P;
    str_map map_Monk;
    str_Pisteurs n_p;
    str_Monk antagoniste;

}str_plateau;

    str_plateau plateau;


//PROTOTYPES
void Init(struct str_plateau *plateau);


#endif // VALEURS_H_INCLUDED
