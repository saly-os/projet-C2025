#include <stdio.h>
#include <string.h>
#include "etudiant.h"

Etudiant saisir_etudiant() {
    Etudiant e;
    // Saisie sécurisée des champs
    printf("Numero: "); scanf("%d", &e.numero);
    printf("Nom: "); scanf("%30s", e.nom);
    printf("Prenom: "); scanf("%20s", e.prenom);
    printf("Email: "); scanf("%20s", e.email);
    printf("Date de naissance (YYYY-MM-DD): "); scanf("%10s", e.date_naissance);
    printf("Code classe: "); scanf("%d", &e.code_classe);
    return e;
}

void afficher_etudiant(Etudiant e) {
    printf("%d | %s %s | %s | %s | Classe: %d\n", e.numero, e.nom, e.prenom, e.email, e.date_naissance, e.code_classe);
}