/*
 * pointe.c
 *
 *  Created on: 20 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * pa et pa contiennent des adresses d'entiers
 * i.e. pointeur vers un entier
 */
void swap(int *pa, int *pb) {
	int tmp;
	printf("Param�tres (@) : %x et %x\n", pa, pb);
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main() {
	int a = 12;
	int b = 15;
	printf("Valeur de la variable a : %d\n", a);  // 12
	printf("Adresse de la variable a : %x\n", &a);  // 61fe1c
		// &a : adresse de la variable a en m�moire (pointeur sur un entier)
	printf("AVANT a = %d, b = %d\n", a, b);
	swap(&a, &b);
	printf("APRES a = %d, b = %d\n", a, b);

	// exemple d'allocation dynamique
	int n = 100; // valeur issue d'un calcul ou d'une entr�e ext�rieure
	double *tableau = malloc(n*sizeof(double)); // allocation dynamique
	for (int i=0; i<n; i++) {
		tableau[i] = 2.5*i;
	}
	for (int i=0; i<n; i++) {
		printf("%f ", tableau[i]);
	}
	printf("\n");
	free(tableau); // lib�ration de m�moire allou�e dynamiquement
	return EXIT_SUCCESS;
}

