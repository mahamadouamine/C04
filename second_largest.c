#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main()
{
    int n; // Déclaration de la variable pour stocker la taille du tableau
    scanf("%d", &n); // Lecture de la taille du tableau depuis l'entrée standard

    int tab[n]; // Déclaration du tableau avec la taille donnée

    // Boucle pour lire les éléments du tableau
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]); // Lecture de chaque entier et stockage dans le tableau
    }

    // Tri partiel : on cherche juste les deux plus grands nombres
    for (int i = 0; i < 2; i++) // Cette boucle place les 2 plus grands au début du tableau
    {
        for (int j = i + 1; j < n; j++) // Parcours du reste du tableau
        {
            if (tab[j] > tab[i]) // Si un élément suivant est plus grand que l'actuel
            {
                // On échange les deux éléments
                int tmp = tab[i]; // tmp reçoit la valeur actuelle
                tab[i] = tab[j];  // on met la plus grande valeur à la place
                tab[j] = tmp;     // on met l'ancienne valeur à la nouvelle position
            }
        }
    }

    // Vérifie s’il y a au moins deux éléments
    if (n < 2)
    {
        // Message d’erreur s’il n’y a pas assez de valeurs
        printf("Pas assez de nombres pour trouver le deuxième plus grand.\n");
    }
    else
    {
        // Affiche le deuxième plus grand nombre (à l'indice 1 après tri partiel)
        printf("Le deuxième plus grand nombre est : %d\n", tab[1]);
    }

    return 0; // Fin du programme
}
