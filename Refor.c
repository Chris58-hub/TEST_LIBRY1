#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max_Enseignant 100

typedef struct {
    char code[20];
    char nom[20];
    char prenom[15];
    char sexe;
    char grade[15];
    char matricule[15];
} Enseignant;

void creer_enseignants(Enseignant *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enregistrement des enseignants \n");
        printf("code: ");
        scanf("%s", v[i].code);
        printf("nom: ");
        scanf("%s", v[i].nom);
        printf("prenom: ");
        scanf("%s", v[i].prenom);
        printf("sexe (M/F): ");
        scanf(" %c", &v[i].sexe); // Note the space before %c to consume any leftover newline character
        printf("grade: ");
        scanf("%s", v[i].grade);
        printf("matricule: ");
        scanf("%s", v[i].matricule);
    }
}

// Procédure pour vérifier si un enseignant existe dans le tableau
void verifier_enseignant(Enseignant *v, int taille, char *code) {
    int trouve = 0;
    for (int j = 0; j < taille; j++) {
        if (strcmp(v[j].code, code) == 0) {
            printf("L'enseignant avec le code '%s' existe.\n", code);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("L'enseignant avec le code '%s' n'existe pas.\n", code);
    }
}

int main(int argc, char *argv[]) {
    int n;
    printf("donner la taille du vecteur: ");
    scanf("%d", &n);

    Enseignant *vecteur = (Enseignant *)malloc(n * sizeof(Enseignant));
    creer_enseignants(vecteur, n);

    printf("\n#### Liste des enseignants :\n");
    int k;
    for (k = 0; k < n; k++) {
        printf("***************** %d\n", k + 1);
        printf("code: %s\n", vecteur[k].code);
        printf("nom: %s\n", vecteur[k].nom);
        printf("prenom: %s\n", vecteur[k].prenom);
        printf("sexe: %c\n", vecteur[k].sexe);
        printf("grade: %s\n", vecteur[k].grade);
        printf("matricule: %s\n", vecteur[k].matricule);
    }

    // Vérifier si un enseignant existe
    char code[20];
    printf("Entrez le code de l'enseignant à vérifier: ");
    scanf("%s", code);
    verifier_enseignant(vecteur, n, code);

    free(vecteur);
    return 0;
}
