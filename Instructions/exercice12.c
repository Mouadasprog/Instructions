#include <stdio.h>
#include <math.h>
int main(){

   int année;
   printf("Veuillez entrez l'année: ");
   scanf("%d",&année);
   if(année%4==0 && année%100!=0 || année%400==0)
   printf("cette année est Bissextile\n");
   else
   printf("cette année pas Bissextile\n");
   return 0;








}