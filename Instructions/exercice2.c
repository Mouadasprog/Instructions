#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

    int main() {

/*DECLARATION DES VARIABLES*/

    float A,B,Somme,Produit;



/*ENTRÉE DES DONNÉES*/

    printf("Veuillez entrez le nombre A : ");
    scanf("%f",&A);
    printf("Veuillez entrez le nombre B : ");
    scanf("%f",&B);
    
   
    
/*TRAITEMENT DES DONNÉES*/

     B = A+B;
     A = B-A;
     B = B-A;
     
     Somme = A + B;
     Produit = A * B;

     if(A*B>0){
        printf("A = %.2f\n",A);
        printf("B = %.2f\n",B);
     }
     else if(A*B<0){
        printf("la valeur de A est: %.2f\n",Somme);
        printf("la valeur de B est: %.2f\n",Produit);
     }
         
    
         









          return 0;


















    }