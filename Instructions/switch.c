#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

    int main() {

/*DECLARATION DES VARIABLES*/

    int A;


/*ENTRÉE DES DONNÉES*/

    printf("Veuillez entrez un nombre entier: ");
    scanf("%d",&A);
    
   
    
/*TRAITEMENT DES DONNÉES*/

   switch (A) {
      case 1: printf("LUNDI\n");
              break;
      case 2: printf("MARDI\n");
              break;
      case 3: printf("MERCREDI\n");
              break;
      case 4: printf("JEUDI\n");
              break;
      case 5: printf("VENDREDI\n");
              break;
      case 6: printf("SAMEDI\n");
              break;
      case 7: printf("DIMANCHE\n");
              break;
      default: printf("y pa de jour de ce nombre entrée:\n");
           
   }
      


    




    

          return 0;


















    }