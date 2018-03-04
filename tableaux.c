#include <stdio.h>
#include "tableaux.h"

void print_tab(int tableau[], int tailleTableau){
	int i;
	for (i=0; i<tailleTableau; i++){
		printf("%d ",tableau[i]);
	}
	printf("\n");
}

int sommeTableau(int tableau[], int tailleTableau){
	int somme=0;
	int i;
	for (i=0; i<tailleTableau; i++){
		somme=somme+tableau[i];
	}

	return somme;
}

double moyenneTableau(int tableau[], int tailleTableau){
	double moyenne=0.0;
	int somme=sommeTableau(tableau, tailleTableau);
	moyenne=somme/(double)tailleTableau;
	
	return moyenne;
}

void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau){
	int i;
	for (i=0; i<tailleTableau; i++){
		tableauCopie[i]=tableauOriginal[i];
	}
}

void maximumTableau(int tableau[], int tailleTableau, int valeurMax){
	int i;
	for (i=0; i<tailleTableau; i++){
		if (tableau[i]>valeurMax){
			tableau[i]=0;
		}
			
	}
}

//void ordonnerTableau(int tableau[], int tailleTableau){
//
//	int temp=0;
//	for (i=0; i<tailleTableau; i++){
//		if (tableau[i]>temp){
//			temp=tableau[i];
//		}
//	}
//}