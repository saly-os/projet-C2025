#include <stdio.h>
#include "helper/helper.h"
// Inclure les headers des modules ici...

int main() {
    int choix;
    do {
        afficher_menu();
        choix = lire_int("Votre choix : ");
        switch (choix) {
            case 1:
                // Appeler le sous-menu étudiant
                break;
            case 2:
                // Appeler le sous-menu matière
                break;
            case 3:
                // Appeler le sous-menu classe
                break;
            case 4:
                // Appeler le sous-menu note
                break;
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
    } while (choix != 0);
    return 0;
}