#include <stdio.h>
#include <string.h>
#include "note.h"

Note saisir_note() {
    Note n;
    printf("Numero etudiant: "); scanf("%d", &n.numero_etudiant);
    printf("Reference matiere: "); scanf("%d", &n.reference_matiere);
    printf("Note CC: "); scanf("%f", &n.noteCC);
    printf("Note DS: "); scanf("%f", &n.noteDS);
    return n;
}

void afficher_note(Note n) {
    printf("Etudiant: %d | Matiere: %d | CC: %.2f | DS: %.2f\n", n.numero_etudiant, n.reference_matiere, n.noteCC, n.noteDS);
}