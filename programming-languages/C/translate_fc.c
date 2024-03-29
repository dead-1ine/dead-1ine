#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0; // lower limit of temperature table
	upper = 300; // upper limit
	step = 20; // step size

	fahr = lower;
	int cycle = 1;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%dth: %d=\t%d\n", cycle, fahr, celsius);
		fahr = fahr + step;
		cycle++;
	}
}
