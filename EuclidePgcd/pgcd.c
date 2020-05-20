/*
 * fibo.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * fonction calculant le pgcd de nombres entiers a et b
 * renvoie le plus grand commun diviseur de a et b
 * |N x |N -> |N
 */
unsigned int pgcd(unsigned int a, unsigned int b){
	unsigned int reste;  // variable locale à la fonction pgcd
	do {
		reste = a % b;
		a = b;
		b = reste;
	} while (b!=0);
	return a;
} 	// fin de la fonction : paramètres et variable locales supprimés
	// seule la valeur de retour subsiste


/**
 * fonction principale
 */
int main(int argc, char* argv[]) {  //i.e string argv[]
	unsigned int p; // pgcd à calculer
	for (int i=0; i<argc; i++) {
		printf("Argument n°%d : %s\n", i, argv[i]);
	}
	if (argc != 3) {
		printf("Le programme PGCD nécessite 2 paramètres");
		exit(-1);
	}
	unsigned int a = atoi(argv[1]);  // convertit du texte en nombre ou 0 si non interprétable
	unsigned int b = atoi(argv[2]);
	printf("Nombres reçus a=%u et b=%u\n", a,b);
	if ((a==0) || (b==0)) {
		printf("Le programme PGCD nécessite 2 entiers strictement positifs");
		exit(-1);
	}
	p = pgcd(a, b); // appel de la fonction pgcd avec les paramètres réels a et b
	// les valeurs des variables a et b sont copiées dans les parmètres formels
	// a et b de la fonction pgcd
	printf("Le pgcd de %u et %u est %u\n", a, b, p);
	// autres appels possibles
	p = pgcd(12, a+b);
	printf("Autre pgcd : %u\n", p);
	p = pgcd(15, pgcd(27, 75));
	printf("Autre pgcd : %u\n", p);
	// return 0;
	return EXIT_SUCCESS; // macro égale à 0
}
