#include <stdio.h>

int main(void) {
	int temperatura = 25;
	printf("Temperature: %d degrees\n", temperatura);
	if (temperatura < 20) {
		printf("Low temperature\n");
	} else {
		printf("High temperature\n");
	}
	return 0;
}
