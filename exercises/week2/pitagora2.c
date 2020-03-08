#include <stdio.h>
#include <math.h>

int main() {

	// nastavi jih na 0.
	int spMeja = 0, zgMeja = 0;	
	scanf("%d%d", &spMeja, &zgMeja);
	
	int stevec = 0;
	
	for(int c = spMeja; c <= zgMeja; c++) {
		// preverimo, ali lahko c zapišemo s pitagorejsko vsoto
		for(int a = 1; a < c; a++) {
			// izračunamo b^2 in preverimo, ali je njegov koren celo število
			int b2 = (c * c) - (a * a);
			int b = round(sqrt(b2));
			if (b * b == b2) {
				stevec++;
				break;
			}
		}
	}
	
	printf("%d", stevec);
	
	return 0;
}


 





