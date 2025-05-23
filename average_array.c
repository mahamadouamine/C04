#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie pour utiliser printf et scanf

int main() { // Déclaration de la fonction principale où commence l'exécution du programme

    int n; // Déclaration d'une variable entière 'n' qui va contenir la taille du tableau (le nombre d'éléments à lire)

    scanf("%d", &n); // Lecture d'un entier depuis l'entrée standard (le clavier) et stockage dans 'n'

    int tableau[n]; // Déclaration d’un tableau d’entiers de taille 'n' (allocation dynamique sur la pile)

    int somme = 0; // Initialisation d'une variable 'somme' à 0, elle servira à stocker la somme des éléments du tableau

    for (int i = 0; i < n; i++) { // Boucle 'for' pour parcourir chaque case du tableau de 0 à n-1

        scanf("%d", &tableau[i]); // Lecture d’un entier et stockage dans la case i du tableau

        somme += tableau[i]; // Ajout de la valeur lue à la somme totale

    } // Fin de la boucle 'for'

    float moyenne = (float)somme / n; // Calcul de la moyenne : on convertit 'somme' en float pour éviter une division entière

    printf("La moyenne est : %.1f\n", moyenne); // Affichage de la moyenne avec deux chiffres après la virgule

    return 0; // Fin du programme, retour de 0 pour indiquer que tout s’est bien passé

} // Fin de la fonction main
