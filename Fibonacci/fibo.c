/*
 * fibo.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>

#define N 15

int main() {
	// 0 1 1 2 3 5 8 13 21 34 ...
	unsigned int fibo[N+2];
	fibo[0] = 0;
	fibo[1] = 1;
	// calculer les N+2 termes de la suite de Fibonacci et les ranger dans un tableau
	for (int l=0; l<N; l++) {
		fibo[l+2] = fibo[l+1] + fibo[l]; // somme des 2 précédents
	}
	// afficher le tableau des termes de la suite
	for (int i=0; i<N+2; i++) {
		printf("%d ", fibo[i]);
	}
	printf("\n");
}
