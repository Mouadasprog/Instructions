#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

    int main(){

/*DECLARATION DES VARIABLES*/

   float m,n,somme,j;




/*ENTRÉE DES DONÉES*/
      
     printf("Veuillez entrz le nombre des photocopies: ");
     scanf("%f",&n);




/*TRAITEMENT DES DONNÉES*/

      m  = n*0.30;
   somme = 10*0.30+(n - 10)*0.25;
      j =  10*0.30 + 20*0.25 +(n - 10)*0.20;

   if(n<=10){
      printf("Votre facture est de: %.2fDH\n",m);
   }
   else if(n<=30){
      printf("Votre facture est de : %.2fDH\n",somme);
   }
   else {
      printf("Votre facture est de: %.2fDH\n",j);
   }
                      return 0;
    }



    


    