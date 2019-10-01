#include <stdio.h>
#include "parant.h"

int main() {
	char text[30];
	printf("Text: ");
	scanf("%s", text);
	printf("Text is%s correct!\n", (check(text) ? "" : " not"));
	
	return 0;
}