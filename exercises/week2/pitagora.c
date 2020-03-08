#include <stdio.h>
#include <stdbool.h>

int main() {

	// nastavi jih na 0.
	int spMeja = 0, zgMeja = 0;	
	scanf("%d%d", &spMeja, &zgMeja);
	
	int stevec = 0;
	
	for(int c = spMeja; c <= zgMeja; c++) {
		
		// za duplikate
		bool vsotaObstaja = false;
		
		for(int a = 1; a < c; a++) {
			for(int b = a; b < c; b++) {
				if((a*a + b*b) == (c*c)) {
					stevec++;
					vsotaObstaja = true;
					//printf("%d^2 + %d^2 = %d^2\n", a, b, c);
					break; // [A]
				}			
			}
			
			if (vsotaObstaja) {
				break; // [B]
			}		
		}
		
		// break [B] nas vrže na to mesto
	}
	
	printf("%d", stevec);
	
	return 0;
}


 





