#include <stdio.h>

int fact(int number) {
	if (number <= 1) {
		return 1;
	} else {
		return number * fact(number - 1);
	}
}

int main() {
	
	printf("%d\n", fact(5));
	
	return 0;
}