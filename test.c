#include <stdio.h>
#include <math.h>  // pow

void int2bin(int x, int nb_bit){
	int b, i;
	int x_bin[nb_bit];
	for (b=nb_bit-1; b>=0; b--){
		x_bin[b]=x%2;
		//printf("%d --> %d\n", b, x_bin[b]);
		x=x/2;
	}

	for (i=0; i<nb_bit; i++){
		printf("%d", x_bin[i]);
	}
	printf("\n");

}

void swap(int * a, int * b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void fake_swap(int  a, int  b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

// inverser les 4eme et 6eme bits de a
int main(){
	
	int a, mask, b, premask;
	a=78;
	
	printf("inverser les 4eme et 6eme bits:\n");
	int2bin(a, 8);	
	mask=pow(2,3)+pow(2,5); // mask avec des 1 sur les 4eme et 6eme bits
	int2bin(mask, 8);
	//printf("%d", mask);
	b=a^mask;
	int2bin(b, 8);
	
	
	
	
	printf("\n mettre a 0 le 3eme bit:\n");
	int2bin(a, 8);	
	premask=pow(2,2); // mask avec 1 sur le 3eme bit
	mask=~premask; // on inverse pour avoir 0 sur le 3eme bit, et les 1 partout
	int2bin(mask, 8);
	b=a & mask;
	int2bin(b, 8);
	
	// or
	b=a&~0x4;
	int2bin(b, 8);
	
	printf("\n mettre a 1 le 1er et de dernier bits:\n");
	int2bin(a, 8);	
	mask=pow(2,0)+pow(2,7); // mask avec des 1 sur le 1er et le dernier bits
	int2bin(mask, 8);
	b=a | mask;
	int2bin(b, 8);
	
	// or
//	a |=0x1;
//	a |=0x80;
	b= (a|0x1)|0x80;
	int2bin(b, 8);
	
	// test
	int a,b;
	a=5; b=10;
	a = b++; printf("a=%d b=%d \n", a, b); 
	
	a=5; b=10;
	a = ++b; printf("a=%d b=%d \n", a, b); 
	
	a=45; b=80; printf("a=%d b=%d \n", a, b); 
	swap(&a, &b); printf("a=%d b=%d \n", a, b);
	fake_swap(a, b); printf("a=%d b=%d \n", a, b);
	
	int *pa;
	pa=&a;
	printf("a = %d \n", a);
	printf("&a = %p \n", &a);
	printf("pa = &a = %p \n", pa);
	printf("*pa = *&a = a = %d \n", *pa);
	*pa=99;
	printf("a = %d \n", a);
	
	int N=10;
	int tab2[N];
	tab2[0]=66; tab2[1]=77;
	printf("%p \n", tab2);
	printf("%p \n", &tab2[0]);
	
	int tab3[4]={0,1,2,3};
	printf("%d \n", tab3[0]);
	
	int tab4[4]={88,17};
	printf("%d \n", tab4[0]);
	printf("%d \n", tab4[1]);
	printf("%d \n", tab4[2]);
	printf("%d \n", tab4[3]);
	
	return 0;
}