#include <stdio.h>

/* print Fahrenheit-Celsius
 *  for fahr = 0, 20, ..., 300 */
int main(int argc, char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;   // lower limit of temperature scale
	upper = 300; // upper limit
	step = 20;   // step size

	celsius = lower;
	printf("C\tF\n");
	while (celsius <= upper) {
		fahr = 32.0 + (celsius * 9.0 / 5.0);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius += step;
	}
}
