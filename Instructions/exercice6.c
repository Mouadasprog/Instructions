#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

    int main() {


        int age;
        char sexe;
         printf("HOMME = H, FEMME = F\n");
         printf("Veuillez entrez votre sexe: ");
         scanf("%c",&sexe);
         printf("Veuillez entrez votre age: ");
         scanf("%d",&age);
          
          /* if(age>20 && sexe == 'H' || age>18 && age<35 && sexe =='F')
           printf("vous etes imposable\n");
           else
           printf("vous n'etes pas imposable\n");*/
           bool c1,c2;
           c1 = age>20 && sexe == 'H';
           c2 = age>18 && age<35 && sexe =='F';
           if (c1==true || c2==true) 
          printf("vous etes imposable\n");
          else   
          printf("vous n'etes pas imposable\n");
      
    return 0;
         







    }