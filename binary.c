#include "binary.h"

void dec_to_bin(int number, int binary[16]) {
	
	int counter = 0;
	while (number > 0) {
		binary[counter] = number % 2;
		number = number / 2;
		counter++;
	}
	
	int i;
	for (i = counter; i < 16; ++i) {
		binary[i] = 0;
	}
	
}