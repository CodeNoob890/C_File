#include <stdio.h>


void swap(int *pa, int *pb);

int main(int argc, char *argv[]) {
	int a = 6;
	int b = 5;
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	
	return 0;
}

void swap(int *pa, int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
