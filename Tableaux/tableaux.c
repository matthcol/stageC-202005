/*
 * tableaux.c
 *
 *  Created on: 19 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdbool.h>

#define N 4

int main() {
	// tableau statique
	double temperatures[N]; // tableau de 4 cases de type double indic�es de 0 � 3
	temperatures[0] = 15.0; // case n�0 du tableau affect�e � la valeur 15.2
	temperatures[1] = 17.5;
	temperatures[2] = 25.25;
	temperatures[3] = 15.0;  // adresse d�but du tableau + 3*taille(double)
	printf("Temp�rature n�0 : %f\n", temperatures[0]);
	for (int i = 0; i < N; i++) {
		printf("%.2f ", temperatures[i]);
	}
	printf("\n");
	printf("Taille du tableau : %I64d octets\n", sizeof(temperatures));

	int pressions[] = {970, 980, 990, 1000, 1010, 1020, 1030, 1040};
	int taille = 8;
	for (int i = 0; i < taille; i++) {
		printf("%d ", pressions[i]);
	}
	printf("\n");

	// recherche d'une temp�rature dans le tableau de temp�ratures
	// op�rateur && est s�quentiel
		// A B   A&&B
		// F F   F
		// F V   F
		// V F   F
		// V V   V
	//printf("Trop loin : %f\n", temperatures[1000000]);  // segmentation fault
	double valeur = 25.7;
	// solution n�1
	int i=0;
	while ((i<N) && (temperatures[i] != valeur)) {
		i++;
	}
	if (i<N) {
		printf("Valeur %f trouv�e � la position %d\n", valeur, i);
	} else {
		printf("Valeur %f non trouv�e\n", valeur);
	}
	printf("------------------\n");
	// solution n�2
	valeur = 15.0;
	int j;
	bool found = false; // trouv� au moins une fois la valeur cherch�e
	for (j=0; j<N; j++){
		if (temperatures[j] == valeur) {
			printf("Valeur %f trouv�e � la position %d\n", valeur, j);
			found = true;
		}
	}
	if (!found) printf("Valeur %f non trouv�e\n", valeur);
// exemple de post traitement positif
//	if (found) {
//		// calcul sur la t�mp�rature
//	}
	printf("------------------\n");
	// solution n�3  = on s'arr�te � la 1�re valeur trouv�e
	valeur = 15.0;
	found = false; // trouv� au moins une fois la valeur cherch�e
	for (j=0; j<N; j++){
		if (temperatures[j] == valeur) {
			printf("Valeur %f trouv�e � la position %d\n", valeur, j);
			found = true;
			break;
		}
	}
	if (!found) printf("Valeur %f non trouv�e\n", valeur);

	return 0;
}

