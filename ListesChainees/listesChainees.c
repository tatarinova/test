/*
 ============================================================================
 Name        : listesChainees.c
 Author      : sam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "listeEntier.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	ELEM * liste1 = initListe(5);
//	printf("%d\n",liste1->valeur);
//	printf("%p\n",liste1->suivant);

	addToEnd(liste1, 88);
	addToEnd(liste1, 89);
	addToEnd(liste1, 90);
	addToBegin(&liste1, 100);

	printListe(liste1);
	int nbElems = countElements (liste1);
	printf("nb elems = %d \n", nbElems);

	return EXIT_SUCCESS;
}
