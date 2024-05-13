#include <stdio.h>
#include <math.h>

   int main(){

        
        char Type_de_opération;
        printf("Veuillez entrez le type d'opération que vous voulez: ");
        scanf("%c",&Type_de_opération);
        float A,B;
        printf("Veuillez entrez le nombre A: ");
        scanf("%f",&A);
        printf("Veuillez entrez le nombre B: ");
        scanf("%f",&B);

        switch (Type_de_opération)
        {
           case 'A':printf("l'opération donne: %.2f\n",A+B);
                    break;
           case 'S':printf("l'opération donne: %.2f\n",A-B);
                    break;
           case 'P':printf("l'opération donne: %.2f\n",A*B);
                    break;    
           case 'D':printf("l'opération donne: %.2f\n",A/B);
                    break;   
           default: printf("pas de solution\n");
                    break;      
        }
      

       

        return 0;











   }