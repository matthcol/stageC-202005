/*
 * variable.c
 *
 *  Created on: 18 mai 2020
 *      Author: Matthias
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
	double temperature; // d�claration variable de type float (64 bits)
	int pression; // entier 32 bits de -2G � 2G env
	temperature = 21.3E+310; // affectation
	pression = 1020; // 1020 est decompos� en base 2 (exact)
	printf("La temp�rature est %.15f �C et la pression de %d HPa",
			temperature, pression);
}


