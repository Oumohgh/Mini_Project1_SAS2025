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
int compterReussites(int notes[], int n){
    int reussi =0;
    for (int i = 0; i < n; i++)
    {
        if(notes[i]>=10){
            reussi++;
        }
    }
  return (reussi);  
}

int main (){
int nbr_etudiants,i,nbr_reussi;
float note,moy,maxn,minn;

do
{
printf("Entrez le nombre d'eleves (max.30) :");
scanf("%d",&nbr_etudiants);

}  while ( nbr_etudiants>30 ||  nbr_etudiants<=0);
float notes[nbr_etudiants];

for (i=0;i<nbr_etudiants;i++){
        printf("Saisir la note de l'etudiant %d : ", i+1);
        scanf("%.2f", &notes[i]);
        while (notes[i]<0 || notes[i]>20){
            printf("La note doit etre entre 0 et 20!! \n");
            printf("Saisir la note de l'etudiant %d : ", i+1);
            scanf("%.2f", &notes[i]);
        }
        
    }
    moy = calculerMoyenne(notes,nbr_etudiants);
    printf("La moyenne du classe est: %.2f\n", moy);
    maxn = trouverMax(notes, nbr_etudiants);
    printf("la note la plus élevée :%.2f \n",maxn);
    minn = trouverMin(notes, nbr_etudiants);
    printf("La note la plus faible : %.2f\n", minn);\

    return 0;
}