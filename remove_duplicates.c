#include <stdio.h> // Inclusion de la bibliothèque standard pour utiliser printf et scanf

int main() {
   int nbr, i, j, k;          // Déclaration des variables entières
   int tab[30];               // Déclaration d’un tableau de taille maximale 30

   scanf("%d", &nbr);         // Lecture du nombre d’éléments à entrer dans le tableau

   // Lecture des éléments du tableau
   for (i = 0; i < nbr; i++)
      scanf("%d", &tab[i]);

   // Boucle principale pour supprimer les doublons
   for (i = 0; i < nbr; i++) {
      for (j = i + 1; j < nbr;) {
         // Si un doublon est trouvé
         if (tab[j] == tab[i]) {
            // Décalage vers la gauche de tous les éléments suivants pour écraser le doublon
            for (k = j; k < nbr - 1; k++) {
               tab[k] = tab[k + 1];
            }
            nbr--; // Réduction de la taille logique du tableau
            // On ne fait pas j++ ici car l'élément déplacé à l'indice j doit aussi être vérifié
         } else
            j++; // Si ce n’est pas un doublon, on passe à l’élément suivant
      }
   }

   // Affichage du tableau après suppression des doublons
   printf("Après suppression des doublons : ");
   for (i = 0; i < nbr; i++) {
      printf("%d ", tab[i]); // Affichage de chaque élément unique
   }

   return 0; // Fin du programme
}
