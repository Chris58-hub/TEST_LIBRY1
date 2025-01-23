#include <stdio.h>
#include "SampleLib.h"

// Définition d'une fonction de calcul de factorielle.
  unsigned int fact(unsigned int value)
{
   unsigned int result = 1;
    while (value > 1)
    {
        result *= value;
        value--;
    }
    return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return value;
    int accumulator = 1;
    while (pow > 0)
    {
        accumulator *= value;
        pow--;
    }
    return accumulator;
}
void hello(){
 printf("Hello,World!");
}
 int inversion(int value){
  int nombre,centaine,dizaine,unite,inverse;

  //lecture de l'entier
  printf("Entrez un entier de trois chiffres :");
  scanf("%d",&nombre);

  //verification que le nombre est bien constitué de trois chiffres
  if(nombre<100||nombre>999){
    printf("veuillez entrer un nombre constitué exactement de trois chiffres.\n");
    return 1;
    //arret du programme si la condition n'est pas remplie
  }

  //extraction des chiffres
  centaine=nombre /100;
  //premier chiffre(centaine)
  dizaine=(nombre/10)%10;
  //deuxieme chiffre (dizaine)
  unite=nombre%10;
  //troisieme chiffre(unite)

  // inversion du nombre
  inverse=unite*100+dizaine*10+centaine;
 return inverse;
 }
//definition de la fonction 'produit'
double produit(double num1,double num2){
return num1 * num2;
}
//fonction qui determine si un nombre est pair ou impair
void pairOuImpair(int nombre){
     printf("Entrez un nombre entier :");
  scanf("%i",&nombre);

  //verifier si le nombre est pair ou impair
  if (nombre % 2==0){
    printf("%i est un nombre pair.\n");
  }else{
    printf("%i est un nombre impair.\n");
  }
}
//fonction qui compare deux entiers
 void comparerEntiers(int a, int b){
  if(a==b){
    printf("%d est egal à %d.\n",a,b);
  }else if (a<b){
  printf("%d est inferieur à %d.\n",a,b);
  }else{
   printf("%d est superieur à %d.\n",a,b);
  }
  return 0;
}
void triCroissant(int*temp){
int a,b,c;

//echange pour trier a,b,c
   if(a>b){
    temp = a;
    a = b;
    b = temp;
   }
   if (a>c){
    temp = a;
    a = c;
    c = temp;
   }
   if(b>c){
   temp = b;
   b = c;
   c = temp;
   }
   //affiche les trois entiers dans l'ordre croissant
   printf("les entiers dans l'ordre croissant sont :%i %i %i\n",a,b,c);

   return 0;

}
//fonction pour permuter deux caracteres à l'aide de pointeurs
void permuterChars(char *x, char *y){
char temp;
temp = *x;
*x = *y;
*y = temp;

printf("apres permutation : x ='%c',y='%c'\n",*x,*y);
}
//fonction qui calcule la somme de deux entiers
int somme(int a, int b){
 return a + b;
}



