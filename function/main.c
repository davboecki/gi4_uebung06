#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Darstellung {
	char hex[9];
	char dezimal[11];
} Darstellung;

extern Darstellung* calcDarstellung(unsigned long input);

Darstellung* currentObject;

int main(int argc, char **argv) {
	currentObject = (Darstellung*) malloc(20);
	int i;
	for (i = 0; i < 8; i++) {
		currentObject->hex[i] = ' ';
	}
	currentObject->hex[8] = 0;
	for (i = 0; i < 10; i++) {
		currentObject->dezimal[i] = ' ';
	}
	currentObject->dezimal[10] = 0;

	Darstellung* d = calcDarstellung(1024);

	printf("Hex: %s\n", d->hex);
	printf("Dec: %s\n", d->dezimal);

	for (i = 0; i < 9; i++) {
		printf("%d, ", currentObject->hex[i]);
	}
	printf("\n");
	for (i = 0; i < 11; i++) {
		printf("%d, ", currentObject->dezimal[i]);
	}

	printf("\n");
	return 0;
}
