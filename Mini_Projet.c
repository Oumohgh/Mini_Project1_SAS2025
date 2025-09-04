#include<stdio.h>
#include <stdbool.h>
#define max_etudiants 30   // Valeur max pour les étudiants

float calculerMoyenne(float notes[], int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum += notes[i];
    }
    return sum / n;
}

float trouverMax(float notes[], int n){
    float max = notes[0];
    for (int i = 1; i < n; i++){
        if(notes[i] > max){
            max = notes[i];
        }
    }
    return max;
}

float trouverMin(float notes[], int n){
    float min = notes[0];
    for (int i = 1; i < n; i++){
        if(notes[i] < min){
            min = notes[i];
        }
    }
    return min;
}

int compterReussites(float notes[], int n){
    int reussi = 0;
    for (int i = 0; i < n; i++){
        if(notes[i] >= 10){
            reussi++;
        }
    }
    return reussi;
}

int main() {
    int nbr_etudiants, i, choix;
    float notes[max_etudiants];
    int saisies = 0; // Pour vérifier si on a saisi des notes

    do {
        printf("Entrez le nombre d'etudiants (max. %d) : ", max_etudiants);
        scanf("%d", &nbr_etudiants);
    } while (nbr_etudiants > max_etudiants || nbr_etudiants <= 0);

    do {
        printf("\n====== MENU ======\n");
        printf("1. Saisir les notes\n");
        printf("2. Afficher la moyenne de la classe\n");
        printf("3. Afficher la note la plus elevee\n");
        printf("4. Afficher la note la plus faible\n");
        printf("5. Afficher le nombre de reussites\n");
        printf("6. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                for (i = 0; i < nbr_etudiants; i++) {
                    do {
                        printf("Saisir la note de l'etudiant %d : ", i + 1);
                        scanf("%f", &notes[i]);
                    } while (notes[i] < 0 || notes[i] > 20);
                }
        saisies = 1;
            break;

            case 2:
                if (saisies)
                    printf("Moyenne de la classe : %.2f\n", calculerMoyenne(notes, nbr_etudiants));
                else
                    printf("Veuillez d'abord saisir les notes (option 1).\n");
                break;

            case 3:
                if (saisies)
                    printf("Note la plus elevee : %.2f\n", trouverMax(notes, nbr_etudiants));
                else
printf("Veuillez d'abord saisir les notes (option 1).\n");
 break;

            case 4:
                if (saisies)
printf("Note la plus faible : %.2f\n", trouverMin(notes, nbr_etudiants));
            else
                    printf("Veuillez d'abord saisir les notes (option 1).\n");
                break;

            case 5:
if (saisies)
                 printf("Nombre d'etudiants ayant reussi : %d\n", compterReussites(notes, nbr_etudiants));
else
printf("Veuillez d'abord saisir les notes (option 1).\n");
break;
case 6:
printf("Fin du programme.\n");
break;
default:
printf("Choix invalide. essayez encore.\n");
}
} while (choix != 6);

    return 0;
}
