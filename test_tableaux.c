#include <stdio.h>
#include "tableaux.h"

int main(){
	int myTab[4]={4, 1, 0, 6};
	int s=sommeTableau(myTab, 4);
	double m=moyenneTableau(myTab, 4);
	int myTabcopie[4]={0};
	copie(myTab, myTabcopie, 4);
	
	print_tab(myTab, 4);
	printf("somme: %d \n", s);
	printf("moyenne: %f \n", m);
	print_tab(myTabcopie, 4);
	
	return 0;
}