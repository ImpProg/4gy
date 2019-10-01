#include "palindrom.h"

unsigned int reverse(unsigned int number) {
	int rev_number = 0;
	
	while (number > 0) {
		rev_number = rev_number * 10 + number % 10; 
        number = number / 10;
	}
	
	return rev_number;
}

bool is_palindrom(unsigned int number) {
	return number == reverse(number);
}