/*
 * listeEntier.h
 *
 *  Created on: 4 Mar 2018
 *      Author: natasha
 */

#ifndef LISTEENTIER_H_
#define LISTEENTIER_H_

struct elemListe {
	int valeur;
	struct elemListe * suivant;
};

typedef  struct elemListe ELEM ;

ELEM * initListe(int val);
void printListe(ELEM * liste);
ELEM * getLastElement(ELEM * liste);
void addToEnd(ELEM * liste, int valToAdd);
void addToBegin(ELEM ** liste, int valToAdd);
//void addToIndex(ELEM * liste, int valToAdd, int index);
//void deleteElemAtIndex(ELEM * liste, int index);
int countElements (ELEM * liste);
//ELEM * getElemAtIndex(ELEM * liste, int index);


#endif /* LISTEENTIER_H_ */
