#include <stdio.h>
#include <string.h>
#include "helper.h"

void afficher_menu() {
    printf("===== MENU PRINCIPAL =====\n");
    printf("1. Gérer les étudiants\n");
    printf("2. Gérer les matières\n");
    printf("3. Gérer les classes\n");
    printf("4. Gérer les notes\n");
    printf("0. Quitter\n");
}

int lire_int(const char *message) {
    int val;
    printf("%s", message);
    scanf("%d", &val);
    return val;
}

float lire_float(const char *message) {
    float val;
    printf("%s", message);
    scanf("%f", &val);
    return val;
}

void lire_string(const char *message, char *buffer, int taille) {
    printf("%s", message);
    scanf("%s", buffer);
}