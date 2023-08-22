#include <stdio.h>
int main ()
{
	float celsius = 18;
	float fahrenheit = 86;
	float tempF;
	float tempC;
	tempF = (9/5.0)*celsius+32;
	tempC = (fahrenheit-32)*(5.0/9.0);
	printf ("Mostrar temperatura Fahrenheit: %f\n", tempF);
	printf ("Mostrar temperatura Celsius: %f\n", tempC);
	return 0;
}
