#include <stdio.h>              // Inclusion de la bibliothèque standard pour les entrées/sorties (fonctions comme printf, scanf, etc.)

int main() {                    // Début de la fonction principale du programme
  int taille;                   // Déclaration d'une variable pour stocker la taille du tableau

  scanf("%d", &taille);         // Lecture de la taille du tableau entrée par l'utilisateur

  int tableau[taille];          // Déclaration d'un tableau d'entiers avec la taille fournie

  for (int i = 0; i < taille; i++) {       // Boucle pour remplir le tableau avec des valeurs saisies par l'utilisateur
    scanf("%d", &tableau[i]);              // Lecture d'un entier et stockage dans le tableau à la position i
  }

  int max = tableau[0];         // Initialisation de la variable max avec la première valeur du tableau
  int second_max = tableau[0]; // Initialisation de la variable second_max avec la même valeur (sera mise à jour ensuite)

  for (int i = 1; i < taille; i++) {                  // Parcours du tableau à partir du deuxième élément
    if (tableau[i] > max) {                           // Si l'élément courant est plus grand que max
      second_max = max;                               // L'ancien max devient second_max
      max = tableau[i];                               // Mise à jour de max avec la nouvelle valeur maximale
    } else if (tableau[i] > second_max && tableau[i] != max) {
      second_max = tableau[i];                        // Mise à jour de second_max si l'élément est supérieur à second_max mais différent de max
    }
  }

  printf("Le deuxième plus grand nombre est: %d\n", second_max); // Affichage du deuxième plus grand nombre
  return 0;                   // Fin du programme
}
