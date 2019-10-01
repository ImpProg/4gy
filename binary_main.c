#include "binary.h"
#include <stdio.h>

int main() {
	int result[16];
	
	dec_to_bin(255, result);
	
	int i;
	for (i = 15; i >= 0; i--) {
		printf("%d", result[i]);
	}
	printf("\n");
	
	return 0;
}