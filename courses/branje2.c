#include <stdio.h>

int main() {

	int n = 0;
	int c = " ";
	
	while(1) {
	
		c = getchar();
		
		switch(c) {
			
			case '0': n = n * 10 + 0; break;
			case '1': n = n * 10 + 1; break;
			// ...
			case '9': n = n * 10 + 9; break;
			case '\n': break;
			
			default:
				printf("NAPAKA \n");
				exit(1);
			
		}
	
	}
	
	printf("%d\n", n);

	return 0;
}


