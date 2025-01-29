#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100 // Taille maximale du tableau

// D�claration d'une structure pour repr�senter un enseignant
typedef struct {
    char nom[20];
    char prenom[15];
    char sexe[2]; // "M" ou "F"
    char code[10];
    char grade[15];
    char matricule[10];
} enseignant;

// D�claration d'un tableau global pour stocker les enseignants
enseignant tabEnseignants[N];

// Proc�dure pour remplir les informations des enseignants
void remplir_enseignants(enseignant tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Veuillez entrer le nom de l'enseignant : ");
        scanf("%s", tab[i].nom);

        printf("Veuillez entrer le pr�nom de l'enseignant : ");
        scanf("%s", tab[i].prenom);

        printf("Veuillez entrer le sexe de l'enseignant (M/F) : ");
        scanf("%s", tab[i].sexe);

        printf("Veuillez entrer le code de l'enseignant : ");
        scanf("%s", tab[i].code);

        printf("Veuillez entrer le grade de l'enseignant : ");
        scanf("%s", tab[i].grade);

        printf("Veuillez entrer la matricule de l'enseignant : ");
        scanf("%s", tab[i].matricule);

        printf("\n"); // Ligne vide pour s�parer les entr�es
    }
}

// Proc�dure pour v�rifier si un enseignant existe dans le tableau
void verifier_enseignant(enseignant tab[], int taille, char code[]) {
    int trouve = 0;
    for (int i = 0; i < taille; i++) {
        if (strcmp(tab[i].code, code) == 0) {
            printf("L'enseignant avec le code '%s' existe.\n", code);
            trouve = 1;
            break;
        }
    }
    if (!trouve) {
        printf("L'enseignant avec le code '%s' n'existe pas.\n", code);
    }
}

// Proc�dure pour afficher les informations des enseignants
void afficher_enseignants(enseignant tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Nom : %s\n", tab[i].nom);
        printf("Pr�nom : %s\n", tab[i].prenom);
        printf("Sexe : %s\n", tab[i].sexe);
        printf("Code : %s\n", tab[i].code);
        printf("Grade : %s\n", tab[i].grade);
        printf("Matricule : %s\n", tab[i].matricule);
        printf("----------------------\n");
    }
}

// Fonction principale
int main() {
    int choix;
    char codeRecherche[10];
    int nombreEnseignants;

    printf("Combien d'enseignants souhaitez-vous entrer (max %d) ? ", N);
    scanf("%d", &nombreEnseignants);

    if (nombreEnseignants > N) {
        printf("Erreur : Le nombre d'enseignants ne peut pas d�passer %d.\n", N);
        return EXIT_FAILURE;
    }

    do {
        printf("\nMenu :\n");
        printf("1. Remplir les informations des enseignants\n");
        printf("2. V�rifier un enseignant par code\n");
        printf("3. Afficher les informations des enseignants\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                remplir_enseignants(tabEnseignants, nombreEnseignants);
                break;
            case 2:
                printf("Entrez le code de l'enseignant � rechercher : ");
                scanf("%s", codeRecherche);
                verifier_enseignant(tabEnseignants, nombreEnseignants, codeRecherche);
                break;
            case 3:
                afficher_enseignants(tabEnseignants, nombreEnseignants);
                break;
            case 4:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez r�essayer.\n");
        }
    } while (choix != 4);

    return EXIT_SUCCESS;
}
