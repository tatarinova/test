#include <stdio.h>

int main(){
	
	int a, b, c;
	int * p1, * p2;
	
	a=1; b=2; c=3;
	
	printf("a\t b\t c\t  &a\t\t\t &b\t\t &c\t\t p1\t\t p2\t\t *p1\t *p2\t \n"); // title of table

		
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t \n", (void*)&a, (void*)&b, (void*)&c);
	//printf("%p\t %p\t \n", (void*)p1, (void*)p2);
	//printf("%d\t %d\t \n", *p1, *p2);
	
	p1=&a; p2=&c;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	*p1=*p2;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	(*p2)++;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p1=p2;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p2=&b;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p2=&c;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	*p1=a+b;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	a+=*p1;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	b=*p1+*p2;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	*p1=2*a;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	a=*p2;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p2=p1=&a;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p2++;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	
	p1+=2;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  %d\t %d\t \n", *p1, *p2);
	
	p1=NULL;
	printf("%d\t %d\t %d\t  ", a,b,c);
	printf("%p\t %p\t %p\t ", (void*)&a, (void*)&b, (void*)&c);
	printf(" %p\t %p\t", (void*)p1, (void*)p2);
	printf("  ???\t %d\t \n", *p2);
	
	return 0;
}

//   a	 b	 c	  &a			 	 &b		 		 &c		 		 p1		 		 p2		 		 *p1	 *p2	 
//   1	 2	 3	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 
//   1	 2	 3	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c564	 0x7fff57f0c56c	  1	     3	 
//   3	 2	 3	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c564	 0x7fff57f0c56c	  3	     3	 
//   3	 2	 4	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c564	 0x7fff57f0c56c	  3	     4	 
//   3	 2	 4	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  4	     4	 
//   3	 2	 4	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c568	  4	     2	 
//   3	 2	 4	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  4	     4	 
//   3	 2	 5	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  5	     5	 
//   8	 2	 5	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  5	     5	 
//   8	 10	 5	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  5	     5	 
//   8	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  16	 16	 
//   16	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c56c	  16	 16	 
//   16	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c564	 0x7fff57f0c564	  16	 16	 
//   16	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c564	 0x7fff57f0c568	  16	 10	 
//   16	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	 0x7fff57f0c56c	 0x7fff57f0c568	  16	 10	 
//   16	 10	 16	  0x7fff57f0c564	 0x7fff57f0c568	 0x7fff57f0c56c	  (nil)	 		 0x7fff57f0c568	  ???	 10	
