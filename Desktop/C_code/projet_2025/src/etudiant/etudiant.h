#ifndef ETUDIANT_H
#define ETUDIANT_H

typedef struct {
    int numero;
    char nom[31];
    char prenom[21];
    char email[21];
    char date_naissance[11];
    int code_classe;
} Etudiant;

Etudiant saisir_etudiant();
void afficher_etudiant(Etudiant e);
int charger_etudiants_csv(const char *filename, Etudiant tab[], int max);
int enregistrer_etudiants_csv(const char *filename, Etudiant tab[], int n);
int ajouter_etudiant(Etudiant tab[], int *n, Etudiant e);
int supprimer_etudiant(Etudiant tab[], int *n, int numero);
int modifier_etudiant(Etudiant tab[], int n, int numero);

#endif