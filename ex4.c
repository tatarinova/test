#include <stdio.h>


int main(){
	
	
	int tab[11] = {5, 3, 6, 5, 5, 2, 9, 0, 5, 3, 0};
	int i, x, cnt;
	i=0;
	x=5; // entier a chercher dans la table
	cnt=0; // compteur
	
	do{
		//printf("%d\n", tab[i]);
		if (tab[i]==x){
			cnt++;
		}
		
		i++;
	}while(i<11);
	
	printf("Resultat: %d\n", cnt);
	
	char* chaine = "Salut";
	printf("%s", chaine);
	printf("%c", chaine[1]);
	return 0;
}