#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

    int main() {

        float a,b,c,delta,sol1,sol2,sol3;
     printf("entrez a: ");
     scanf("%f",&a);
     printf("enrez b: ");
     scanf("%f",&b);
     printf("entrez c: ");
     scanf("%f",&c);

        delta = pow(b,2)-(4*a*c);
        sol1 = (-b-sqrt(delta))/(2*a);
        sol2 = (-b+sqrt(delta))/(2*a);
        sol3 = -b/2*a;

         if(delta>0)
         printf("les solutions d'équation est: %.2f %.2f",sol2,sol1);
         else if(delta==0)
         printf("la solution d'équation est: %.2f",sol3);
         else if(delta<0)
         printf("l'équation n'admis pas des solutions");
        
      
    return 0;
         







    }