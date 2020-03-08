#include <stdio.h>

void printIntToChar(int n) { 
	
    if (n < 0) {
        putchar('-'); 
        n = -n; 
    }
  
    if (n/10) 
        printIntToChar(n/10); 
  
    putchar(n%10 + '0'); 
}


int main() {

	int a;
	int n1 = 0, n2 = 0;
	while ((a = getchar()) != ' ') {
		n1 = n1 * 10 + a - '0';
	}
	
	while ((a = getchar()) != '\n') {
		n2 = n2 * 10 + a - '0';
	}

	int vsota = n1 + n2;
	printIntToChar(vsota);	

	return 0;
}




