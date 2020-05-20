/*
 * tableau.c
 *
 *  Created on: 20 mai 2020
 *      Author: Matthias
 */
#include <stdio.h>

void afficherTableau(unsigned int tableau[], unsigned int taille) {
	printf("%u", tableau[0]);
	for (int i=1; i<taille; i++) {
		printf(", %u", tableau[i]);
	}
	printf("\n");
	// pas de return
}

