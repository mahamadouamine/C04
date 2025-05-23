#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties
#include <stdlib.h> // Inclusion de la bibliothèque pour les fonctions de gestion de mémoire

int main() {
    int taille, i;           // Déclaration de variables : taille du tableau et indice de boucle
    int *tableau;            // Déclaration d’un pointeur pour un tableau dynamique

    scanf("%d", &taille);    // Lecture de la taille du tableau entrée par l’utilisateur

    // Allocation dynamique du tableau
    tableau = (int *)malloc(taille * sizeof(int));  // Allocation de mémoire pour 'taille' entiers

    if (tableau == NULL) {   // Vérifie si l’allocation a échoué
        printf("Erreur d'allocation de mémoire.\n"); // Message d’erreur
        return 1;            // Fin du programme avec un code d’erreur
    }

    // Saisie des éléments du tableau
    for (i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);  // Lecture des éléments du tableau
    }

    // Recherche du plus grand élément
    int plusGrand = tableau[0];   // Initialisation avec le premier élément du tableau
    for (i = 1; i < taille; i++) {
        if (tableau[i] > plusGrand) {  // Si l’élément courant est plus grand
            plusGrand = tableau[i];   // Mise à jour du plus grand élément
        }
    }

    // Affichage du plus grand élément
    printf("Le maximum est : %d\n", plusGrand);  // Affiche le résultat

    // Libération de la mémoire
    free(tableau);  // Libération de la mémoire allouée dynamiquement

    return 0;       // Fin du programme avec succès
}