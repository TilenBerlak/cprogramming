#include <stdio.h>
#include <stdbool.h>

int main() {

	int dolzinaZaporedja = getchar() - '0';
	getchar(); // Presledek
	
	bool vsaEnaka = true;
	int prvo = -1;
	
	for(int i = 0; i < dolzinaZaporedja; i++) {
		
		int stevilo = getchar() - '0';
		getchar();
		
		if (i == 0) {
			prvo = stevilo;
		} else if (stevilo != prvo) {
			vsaEnaka = false;
			break;
		}
	
	}

	if (vsaEnaka) {
		putchar('1');
	} else {
		putchar('0');
	}
	// alternativa: putchar(vsaEnaka ? '1' : '0');
	putchar('\n');

	return 0;
}







