#include <stdio.h>

int main() {
	
	int spMeja = 0;	
	int zgMeja = 0; 
	scanf("%d%d", &spMeja, &zgMeja);
	
	int odgovor = 0;
	
	do {
		int poskus = (spMeja + zgMeja) / 2;
		
		scanf("%d", &odgovor);
		if (odgovor == 1) {
			spMeja = poskus + 1;
		} else if (odgovor == -1) {
			zgMeja = poskus - 1;
		}
	} while(odgovor != 0 && spMeja <= zgMeja);
	
	if (spMeja == zgMeja) {
		printf("%d\n", spMeja);
	} else if (spMeja < zgMeja) {
		printf("%d %d\n", spMeja, zgMeja);
	} else {
		printf("PROTISLOVJE\n");
	}
	
	return 0;
}

