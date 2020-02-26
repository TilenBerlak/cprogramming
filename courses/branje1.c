#include<stdlib.h>
#include<stdio.h>

int main() {
	
	int n;
	int c;
	
	while(1) {
		c = getchar();
		if (('0' <= c) && (c <= '9')) {
			n = n * 10 + (c - '0');
			continue; // Ponovno gre na začetek zanke
		}
			
		if (c == '\n') 
			break;
		else {
			printf("NAPAKA \n");
			exit(1); // pošlje OS-ju napako
		}
		
		printf("%d\n", n);
	}
	
	return 0;
}




