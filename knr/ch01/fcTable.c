#include <stdio.h>

int main(void)
{
	int lower = 0;
	int upper = 300;
	int step = 20;
	float fahr = lower;
	float celsius;

	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
