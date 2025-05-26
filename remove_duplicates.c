#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour utiliser printf et scanf

// Fonction pour supprimer les doublons dans un tableau trié
int supprimerDoublons(int tableau[], int taille) {
    // Si le tableau est vide ou contient un seul élément, il n'y a pas de doublon à supprimer
    if (taille == 0 || taille == 1)
        return taille; // Retourner la taille telle quelle

    int index = 0; // Index pour marquer la position du dernier élément unique conservé

    // Parcourir le tableau à partir du 2e élément (i = 1)
    for (int i = 1; i < taille; i++) {
        // Si l'élément courant est différent du dernier élément unique conservé
        if (tableau[i] != tableau[index]) {
            index++; // Avancer l'index pour ajouter un nouvel élément unique
            tableau[index] = tableau[i]; // Copier l'élément unique à la nouvelle position
        }
    }

    // La nouvelle taille du tableau (sans doublons) est index + 1
    return index + 1;
}

int main() {
    int taille; // Variable pour stocker la taille du tableau

    // Lecture de la taille du tableau depuis l'entrée standard
    scanf("%d", &taille);

    int tableau[taille]; // Déclaration d’un tableau de taille dynamique (C99+)

    // Lecture des éléments du tableau
    for (int i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]); // Lecture de chaque élément un par un
    }

    // Appel de la fonction pour supprimer les doublons (le tableau doit être trié avant !)
    int nouvelleTaille = supprimerDoublons(tableau, taille);

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for (int i = 0; i < nouvelleTaille; i++) {
        printf("%d ", tableau[i]); // Affichage de chaque élément unique
    }
    printf("\n"); // Fin de ligne après l’affichage

    return 0; // Fin normale du programme
}
