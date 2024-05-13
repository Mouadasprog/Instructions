#include <stdio.h>
#include <stdlib.h>

 int main(){
         float note1,note2,note3,moyenne;
        printf("Veuillez entrez votre notes: \n");
        printf("entrez la premiére note: ");
        scanf("%f",&note1);
        printf("entrez la deuxième note: ");
        scanf("%f",&note2);
        printf("entrez la troisième note: ");
        scanf("%f",&note3);

        moyenne = (note1 + note2 + note3)/3;

         char mention1,mention2,mention3,mention4,mention5;
            
            mention1 = 'I';
            mention2 = 'P';
            mention3 = 'A';
            mention4 = 'B';
            mention5 = 'T';
            

              if(moyenne<10){
              printf("votre moyenne est: %.2f\n",moyenne);
              printf("votre mention est: %c\n",mention1);
              }
              else if(moyenne>=10 && moyenne<=12){
              printf("votre moyenne est: %.2f\n",moyenne);
              printf("votre mention est: %c\n",mention2);
              }
              else if(moyenne>=12 && moyenne <=14){
              printf("votre moyenne est: %.2f\n",moyenne);
              printf("votre mention est: %c\n",mention3);
              }
              else if(moyenne>=14 && moyenne<=16){
              printf("votre moyenne est: %.2f\n",moyenne);
              printf("votre mention est: %c\n",mention4);
              }
              else if(moyenne>16){
              printf("votre moyenne est: %.2f\n",moyenne);
              printf("votre mention est: %c\n",mention5);
              }
            



             


           return 0;














 }