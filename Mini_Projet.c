#include<stdio.h>

int main (){
int nbr_etudiants,i;
float note,sum ,moy,maxn,minn;

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

for ( i = 0; i < nbr_etudiants; i++)
{
    sum += notes[i];
    
}
moy = sum / nbr_etudiants;
printf("la moy est %d:",moy);
for(i=0; i < nbr_etudiants;i++){

      if (notes[i] > maxn){
          maxn= notes[i];
          printf("")
      }
}

printf("\n        *******      Gestion des etudiants    ****** \n\n");
printf("          ============================================= \n\n");
return 0;

}