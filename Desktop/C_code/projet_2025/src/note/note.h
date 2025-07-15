#ifndef NOTE_H
#define NOTE_H

typedef struct {
    int numero_etudiant;
    int reference_matiere;
    float noteCC;
    float noteDS;
} Note;

Note saisir_note();
void afficher_note(Note n);
int charger_notes_csv(const char *filename, Note tab[], int max);
int enregistrer_notes_csv(const char *filename, Note tab[], int n);
int ajouter_note(Note tab[], int *n, Note nte);
int supprimer_note(Note tab[], int *n, int numero_etudiant, int reference_matiere);
int modifier_note(Note tab[], int n, int numero_etudiant, int reference_matiere);

#endif