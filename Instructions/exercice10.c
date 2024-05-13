#include <stdio.h>
#include <stdlib.h>

  int main(){
     int nombre;
    printf("Veuillez entrez un nombre: ");
    scanf("%d",&nombre);
    switch (nombre)
    {
     case 6:printf("la personne va à droite\n");
            break;
     case 4:printf("la personne va à gauche\n");
            break;
     case 8:printf("la personne va en haut\n");
            break;      
     case 2:printf("la personne va en bas\n");
            break;  
     default:printf("la personne ne bouge pas\n");           
    }









  }