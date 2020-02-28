#include <stdio.h>

int collatz(int n) {
	if(n%2==0) return n/2; else return 3*n+1;
}

int collatz_length(int n) {
	int len = 1;
	while(n != 1) {
		n = collatz(n);
		len = len + 1;
	}
	
	return len;
}

// collatz_length z uporabo goto stavka
int collatz_length2(int n) {
	int len = 1;
    
    loop:
    if(n==1) goto exit;
    n = collatz(n);
    len = len + 1;
    goto loop;
    
    exit:
    	return len;
}

// napačen problem (še vedno testiraj)
// problem je overflow
int collatz_length3(int n) {
	printf("%d\n", n);
	return 1+collatz_length(collatz(n));

}

/*	Kombinacije dolžine n števil 0...(k-1)
 * */
int combs(int k) {
	int count = 0;
    
    for(int i1 = 0; i1 < k; i1++)
		for(int i2 = 0; i2 < k; i2++)
			for(int i3 = 0; i3 < k; i3++) {
				count = count + 1;
				printf("%2d%2d%2d\n", i1, i2, i3);
			}
	return count;
}

// combs z uporabo goto stavka
int combs2(int k) {
	int count = 0;
	int i1 = 0;
	
	loop1:
	if(i1 >= k) goto exit;
		for(int i2 = 0; i2 < k; i2++ )
			for(int i3 = 0; i3 < k; i3++) {
				count = count + 1;
				printf("%2d%2d%2d\n", i1, i2, i3);
			}
	i1 = i1 + 1;
	goto loop1;

	exit1:
		return count;
	
}

int main() {
	
	printf("%d\n", collatz(12));

}



