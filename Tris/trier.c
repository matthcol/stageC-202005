/*
 * trier.c
 *
 *  Created on: 20 mai 2020
 *      Author: Matthias
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * Algorithmes de tris :
 * 	- tri � bulles (bubble sort)  	n^2		n=1M => co�t=1T (5mn sur 1 processeur classique)
 * 	- tri insertion				  	n^2
 * 	- tri rapide (quicksort)		n.log2(n)	n=1M => co�t=20M (7ms)
 */


/**
 * tri d'un tableau avec l'algorithme tri � bulles (bubble sort)
 * co�t taille^2
 */
void trier(unsigned int tableau[], unsigned int taille) {
	// trier les valeurs du tableau
	for (int j=0; j<taille-1; j++) {  // r�p�ter des balayages du jeu de carte
		bool echange = false;
		printf("Balayage %d\n", j);
		for (int i=0; i<taille-1-j; i++) { // 1 balayage pour �changer les cartes 2 � 2
			if (tableau[i] > tableau[i+1]) { // les valeurs ne sont pas dans l'ordre
				// �changer les valeurs
				unsigned int tmp = tableau[i+1];
				tableau[i+1] = tableau[i];
				tableau[i] = tmp;
				echange = true;
			} // fin �change
		} // fin de balayage
		if (!echange) break; // le tableau est tri�
			// on ne fait pas les balayages suivants
	}
}

void afficherTableau(unsigned int tableau[], unsigned int taille) {
	printf("%u", tableau[0]);
	for (int i=1; i<taille; i++) {
		printf(", %u", tableau[i]);
	}
	printf("\n");
	// pas de return
}

int main(void) {
	unsigned int stocks[] = {479000, 77000, 160000, 2000000, 916};
	unsigned int nbStocks = 5;
	trier(stocks, nbStocks);
	afficherTableau(stocks, nbStocks);
	trier(stocks, nbStocks);
	afficherTableau(stocks, nbStocks);
	return EXIT_SUCCESS;
}

