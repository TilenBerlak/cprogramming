#include <stdio.h>

int main() {
	
	int a = getchar() - '0'; // '6' - '0'-> 6
	getchar(); // Prebere presledek
	int b = getchar() - '0';
	
	int vsota = (a + b) % 10;
	
	putchar(vsota + '0');
	putchar('\n');
	
	return 0;
}






