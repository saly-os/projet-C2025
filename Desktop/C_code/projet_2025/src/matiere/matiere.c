#include <stdio.h>
#include <string.h>
#include "matiere/matiere.h"

Matiere saisir_matiere() {
    Matiere m;
    printf("Reference: "); scanf("%d", &m.reference);
    printf("Libelle: "); scanf("%15s", m.libelle);
    printf("Coefficient: "); scanf("%hd", &m.coefficient);
    return m;
}

void afficher_matiere(Matiere m) {
    printf("%d | %s | Coeff: %d\n", m.reference, m.libelle, m.coefficient);
}