#include <stdio.h>

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
	//printf("\n");

}

int main(){
	unsigned char a, b, res;
	int res2;
	a=197;
	b=52;

//	printf("0x%x\n",a); // print hexadecimal
//	printf("0x%x\n",b);


	printf("a \t"); int2bin(a, 8); printf("\t %d \t 0x%x \n", a, a);

	printf("a \t"); int2bin(b, 8); printf("\t %d \t 0x%x \n", b, b);

	res=~a;
	printf("~a \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=~b;
	printf("~b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a&b;
	printf("a & b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a|b;
	printf("a | b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a^b;
	printf("a ^ b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a<<2;
	printf("a<<2 \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=b>>2;
	printf("b>>2 \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a+b;
	printf("a+b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a-b;
	printf("a-b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res2=a*b;
	printf("a*b \t"); int2bin(res2, 16); printf(" %d \t 0x%x \n", res2, res2);

	res=a/b;
	printf("a/b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	res=a%b;
	printf("a%%b \t"); int2bin(res, 8); printf("\t %d \t 0x%x \n", res, res);

	return 0;

}

//    natasha@wanaka ~/Desktop/C $ ./a.out
//    a 	    11000101	     197 	 0xc5
//    a 	    00110100	     52 	 0x34
//    ~a 	    00111010	     58 	 0x3a
//    ~b 	    11001011	     203 	 0xcb
//    a & b 	00000100	     4 	     0x4
//    a | b 	11110101	     245 	 0xf5
//    a ^ b 	11110001	     241 	 0xf1
//    a<<2 	    00010100	     20 	 0x14
//    b>>2 	    00001101	     13 	 0xd
//    a+b 	    11111001	     249 	 0xf9
//    a-b 	    10010001	     145 	 0x91
//    a*b 	    0010100000000100 10244 	 0x2804
//    a/b 	    00000011	     3 	     0x3
//    a%b 	    00101001	     41 	 0x29
