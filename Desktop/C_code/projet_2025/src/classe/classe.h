#ifndef CLASSE_H
#define CLASSE_H

typedef struct {
    int code;
    char nom[31];
    char niveau[8];
} Classe;

Classe saisir_classe();
void afficher_classe(Classe c);
int charger_classes_csv(const char *filename, Classe tab[], int max);
int enregistrer_classes_csv(const char *filename, Classe tab[], int n);
int ajouter_classe(Classe tab[], int *n, Classe c);
int supprimer_classe(Classe tab[], int *n, int code);
int modifier_classe(Classe tab[], int n, int code);

#endif