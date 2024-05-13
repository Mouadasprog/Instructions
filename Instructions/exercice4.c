#include <stdio.h>
#include <math.h>

  int main(){
     int age;
     printf("Veuillez entrez l'age de votre enfant: ");
     scanf("%d",&age);
     
      if(age>=6 && age <=7)
      printf("votre enfant est considéré comme POUSSIN\n");
      if(age>=8 && age<=9)
      printf("votre enfant est considéré comme PUPILLE\n");
      if(age>=10 && age<=11)
      printf("votre enfant est considéré comme MINIME\n");
      if(age>=12)
      printf("votre enfant est considéré comme CADET\n");
      return 0;









  }