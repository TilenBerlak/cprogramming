#include <stdio.h>
#include <stdbool.h>

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
	bool isNegative = false;
	while ((a = getchar()) != ' ') {
		if(a == '-') {
			isNegative = true;
			continue;
		}
			
		n1 = n1 * 10 + a - '0';
	}
	
	if(isNegative) {
		n1 *= -1;
		isNegative = false;
	}
		
	while ((a = getchar()) != '\n') {
		if(a == '-') {
			isNegative = true;
			continue;
		}
			
		n2 = n2 * 10 + a - '0';
	}
	
	if(isNegative) {
		n1 *= -1;
	}
		
	int vsota = n1 + n2;
	printIntToChar(vsota);	

	return 0;
}




