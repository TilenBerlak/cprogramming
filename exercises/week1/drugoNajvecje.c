#include <stdio.h>

int main() {

	int dolzinaZaporedja = getchar() - '0';
	getchar();
	
	int prvak = -1;
	int viceprvak = -1;
	
	for (int i = 0; i < dolzinaZaporedja; i++) {
	
		int stevilo = getchar() - '0';
		getchar();
		
		if(stevilo > prvak) {
			viceprvak = prvak;
			prvak = stevilo;
		
		} else if (stevilo > viceprvak) {
			viceprvak = stevilo;
		}
		
	}
	
	putchar(viceprvak + '0');
	putchar('\n');
	
	return 0;
}

