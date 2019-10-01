#include "parant.h"
#include <stdio.h>

bool check(char text[30]) {
	int counter = 0;
	
	int i = 0;
	while (text[i] != '\0') {
		if (text[i] == '(') {
			counter++;
		} else if (text[i] == ')') {
			if (counter == 0) {
				return false;
			}
			counter--;
		}
		++i;
	}
	
	return counter == 0;
}