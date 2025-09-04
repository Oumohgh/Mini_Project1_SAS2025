#include<stdio.h>
float calculerMoyenne(float notes[], int n){
    float sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + notes[i];
    }
    return sum/n;
}
float trouverMax(float notes[], int n){
    int max = notes[0];
    for (int i = 0; i < n; i++){
        if(notes[i] > max){
            max = notes[i];
        }
    }
    return max;
}
float trouverMin(float notes[], int n){
    int min = notes[0];
    for (int i = 0; i < n; i++){
        if(notes[i] < min){
            min = notes[i];
        }
    }
    return min;
}

int main (){
int nbr_etudiants,i,nbr_reussi;
float note,moy,maxn,minn;

do
{
printf("Entrez le nombre d'eleves (max.30) :");
scanf("%d",&nbr_etudiants);

}  while ( nbr_etudiants>30 ||  nbr_etudiants<=0);
int notes[nbr_etudiants];

for (i=0;i<nbr_etudiants;i++){
        printf("Saisir la note de l'etudiant %d : ", i+1);
        scanf("%f", &note);
        while (note<0 || note>20){
            printf("La note doit etre entre 0 et 20!! \n");
            printf("Saisir la note de l'etudiant %d : ", i+1);
            scanf("%.2f", &note);
        }
        notes[i]=note;
    }


for(i=0; i < nbr_etudiants;i++){

      if (notes[i] > maxn){
          maxn= notes[i];
      }
  else if(notes[i] <= minn){
          maxn= notes[i];
}
printf("la note la plus élevée %.2f ",maxn);
printf("note la plus faible %.2f ",minn);
}
}

printf("\n        *******      Gestion des etudiants    ****** \n\n");
printf("          ============================================= \n\n");
return 0;

moyenne = calculerMoyenne(students,nb_students);
    printf("La moyenne du classe est: %.2f\n", moyenne);
    max = trouverMax(students, nb_students);
    printf("Le maximum est: %.2f\n", max);
    min = trouverMin(students, nb_students);
    printf("Le minimum est: %.2f\n", min);
    return 0;
}