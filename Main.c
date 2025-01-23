#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.h"//inclure la bibliotheque

 int main(void)
{
    int result,nombre,a,b,c;
    char x,y;
    double num1,num2,resultProduit;

    //appel à la fonction 'power'
    result = power(2, 3);
    printf("2³ == %d\n", result);
    result = fact(6);
    printf("6! == %d\n", result);

    //appel à la fonction hello EXERCISE 1
    hello();

    //appel à la fonction 'inversion' EXERCISE 2
   result=inversion(123);
   printf("inversion de l'entier est : %d\n",result);

//lecture des deux nombres reels pour le produit
printf("Entrez le premier nombre reel :");
scanf("%lf",&num1);
printf("Entrez le second nombre reel :");
scanf("%lf",&num2);

//appel de la fonction 'produit'EXERCISE 3

  resultProduit=produit(num1,num2);
  printf("le produit de %.3f et %.3f est :%.3f\n",num1,num2,resultProduit);

  //verification si un nombre est pair ou impair EXERCICE 4
  printf("Entrez un nombre entier :");
  scanf("%d",&nombre);
  pairOuImpair(nombre);
  //comparaison de deux entiers EXERCISE 5
  printf("Entrez le premier entier:");
  scanf("%d",&a);
  printf("Entrez le deuxieme entier :");
  scanf("%d",&b);
  comparerEntiers(a,b);
  //trier trois entiers EXERCICE 6
   printf("les entiers dans l'ordre croissant sont :%i %i %i\n",a,b,c);
   //permutation de deux caracteres EXERCICES 16
   printf("Entrez deux caracteres :\n");
   scanf("%c %c",&x,&y);
   //l'espace avant %c est pour ignorer les caracteres precedents
   printf("avant permutation :x='%c',y='%c'\n",x,y);
   permuterChars(&x,&y);
   //calcul la somme de deux entiers EXERCICES 17
   printf("Entrez deux entiers poue calculer leur somme :\n");
   scanf("%d %d",&a,&b);
   result = somme(a,b);
   printf("la somme de %d et %d est : %d\n",a,b,result);
    return EXIT_SUCCESS;
}
