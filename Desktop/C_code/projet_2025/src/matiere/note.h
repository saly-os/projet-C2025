#ifndef MATIERE_H
#define MATIERE_H

typedef struct {
    int reference;
    char libelle[16];
    short coefficient;
} Matiere;


Matiere saisir_matiere();
void afficher_matiere(Matiere m);
int charger_matieres_csv(const char *filename, Matiere tab[], int max);
int enregistrer_matieres_csv(const char *filename, Matiere tab[], int n);
int ajouter_matiere(Matiere tab[], int *n, Matiere m);
int supprimer_matiere(Matiere tab[], int *n, int reference);
int modifier_matiere(Matiere tab[], int n, int reference);

#endif