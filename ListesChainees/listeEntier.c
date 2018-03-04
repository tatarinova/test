/*
 * listeEntier.c
 *
 *  Created on: 4 Mar 2018
 *      Author: natasha
 */
#include <stdlib.h>
#include "listeEntier.h"

// ne marche pas
//ELEM * initListe(int val){
//	ELEM  maliste;
//	maliste.valeur=val;
//	maliste.suivant=NULL;
//	return &maliste;
//}

ELEM * initListe(int val){
	ELEM * maliste = malloc (sizeof(ELEM));
	maliste->valeur=val;
	maliste->suivant=NULL;
	return maliste;
}

void printListe(ELEM * liste){
	ELEM * elemCourant=liste;

	do{
		printf("%d \n",elemCourant->valeur);
		elemCourant=elemCourant->suivant;
	}while(elemCourant!=NULL);

}


ELEM * getLastElement (ELEM * liste){
	ELEM * elemCourant = liste;
	while (elemCourant->suivant!=NULL){
		elemCourant=elemCourant->suivant;
	}
	return elemCourant;
}

int countElements (ELEM * liste){
	ELEM * elemCourant = liste;
	int i=1;
	while (elemCourant->suivant!=NULL){
		elemCourant=elemCourant->suivant;
		i++;
	}
	return i;
}

void addToEnd(ELEM * liste, int valToAdd){
	ELEM * lastElem = getLastElement(liste);
	ELEM * newElem=initListe(valToAdd);

	lastElem->suivant=newElem;
}

void addToBegin(ELEM ** liste, int valToAdd){
	ELEM * newElem=initListe(valToAdd);
	newElem->suivant=*liste;
	*liste=newElem;
	//printListe(liste);
	// maintenant newElem est le 1er elem de la list
}
//void addToIndex(ELEM * liste, int valToAdd, int index){
//	ELEM * newElem=initListe(valToAdd);
//	int nbElems=countElements(liste);
//
//}

//ELEM * getElemAtIndex(ELEM * liste, int index){
//	ELEM * elemCourant = liste;
//	int i = 1;
//	while (elemCourant->suivant!=NULL){
//
//		elemCourant=elemCourant->suivant;
//	}
//	return elemCourant;
//
//
//
//}

//void deleteElemAtIndex(ELEM * liste, int index);

