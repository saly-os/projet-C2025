#include <stdio.h>
#include <string.h>
#include "classe.h"

Classe saisir_classe() {
    Classe c;
    printf("Code: "); scanf("%d", &c.code);
    printf("Nom: "); scanf("%30s", c.nom);
    printf("Niveau: "); scanf("%7s", c.niveau);
    return c;
}

void afficher_classe(Classe c) {
    printf("%d | %s | %s\n", c.code, c.nom, c.niveau);
}