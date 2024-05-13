#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

    int main() {


     float PTTC,PHT,A,B,C;
     float taux;
      printf("Veuillez entrez le PHT: ");
      scanf("%f",&PHT);
      printf("Veuillez entrez la catégorie du produit: ");
      scanf("%f",&taux);
      PTTC = PHT + (PHT*taux);
      A = 0.07;
      B = 0.20;
      C = 0.25;
      if(taux = A)
      printf("le PTTC est: %.2f\n",PTTC);
      else if(taux=B)
      printf("le PTTC est: %.2f\n",PTTC);
      else if(taux=C)
      printf("le PTTC est: %.2f\n",PTTC);
      else
      printf("cette catégorie n'existe pas: \n");

     
    return 0;
         







    }