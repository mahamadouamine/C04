#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie (pour printf et scanf)

// Définition de la fonction de tri à bulles
void tri_bulle(int tableau[], int taille) {
    int i, temp, echanger;

    // Boucle qui continue tant qu'il y a eu un échange dans le passage précédent
    do {
        echanger = 0; // Initialisation : aucun échange pour le moment

        // Parcours du tableau jusqu'à l'avant-dernier élément
        for (i = 0; i < taille - 1; i++) {
            // Si l'élément courant est plus grand que le suivant, on les échange
            if (tableau[i] > tableau[i + 1]) {
                temp = tableau[i]; // Stocker temporairement l'élément courant
                tableau[i] = tableau[i + 1]; // Déplacer le suivant à la position actuelle
                tableau[i + 1] = temp; // Placer l'élément courant à la position suivante
                echanger = 1; // Indique qu'un échange a eu lieu
            }
        }
    } while (echanger); // Répéter tant qu'il y a eu des échanges
}

int main() {
    int taille, i;

    // Lecture du nombre d'éléments à trier (taille du tableau)
    scanf("%d", &taille);

    // Déclaration d'un tableau de taille dynamique (taille entrée par l'utilisateur)
    int tableau[taille];

    // Lecture des éléments du tableau à trier
    for (i = 0; i < taille; i++) {
        scanf("%d", &tableau[i]);
    }

    // Appel de la fonction de tri à bulles pour trier le tableau
    tri_bulle(tableau, taille);

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]); // Affiche chaque élément trié
    }
    printf("\n"); // Saut de ligne final

    return 0; // Fin du programme
}
