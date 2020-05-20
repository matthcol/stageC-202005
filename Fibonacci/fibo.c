/*
 * fibo.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdlib.h> // EXIT_SUCCES
#include "tableau.h"

#define N 15

void calculerSuiteFibonacci(unsigned int fibo[], unsigned int taille) {
	fibo[0] = 0;
	fibo[1] = 1;
	// calculer les N+2 termes de la suite de Fibonacci et les ranger dans un tableau
	for (int l=0; l<taille-2; l++) {
		fibo[l+2] = fibo[l+1] + fibo[l]; // somme des 2 précédents
	}
}

int main() {
	// 0 1 1 2 3 5 8 13 21 34 ...
	unsigned int fibo[N+2];
	printf("Debut du programme\n");
	calculerSuiteFibonacci(fibo, N+2);
			// tableau fibo est passé en paramètre par adresse
			// N+2 est recopié dans le paramètre formel taille
	// afficher le tableau des termes de la suite
	afficherTableau(fibo, N+2);
	printf("Fin du programme\n");
	return EXIT_SUCCESS;
}
