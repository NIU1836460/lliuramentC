#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float fahrenheit = (temperatura * 9 / 5 + 32);
	printf("Temperature: %d degrees\nFahreheit: %.1f degrees\n", temperatura, fahrenheit);
	if (temperatura < 20) {
		printf("Low temperature\n");
	} else {
		printf("High temperature\n");
	}
	return 0;
}
