#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include "SampleLib.c"

// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value);
// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow);
//Définition de la fonction qui affiche hello
void hello();
//Definiton d'une fonction qui inverse un entier de trois chiffres
int inversion(int value);
//Définition d'une fonction qui effectue le produit de deux nombres reels avec une precision de trois chiffres apres la virgule
double produit(double num1,double num2);
//declaration de la fonction pairOuImpair
void pairOuImpair(int nombre);
//declaration de la fonction qui comparerEntiers
void comparerEntiers(int a, int b);
//declaration de la fonction triCroissant
void triCroissant(int *temp);
//declaration de la fonction permuterChars
void permuterChars(char *x, char *y);
//declaration de la fonction somme
int somme(int a, int b);
#endif
