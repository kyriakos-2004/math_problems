 #include <stdio.h>
 /* print Fahrenheit-Celsius table
 	for fahr = 0, 20, ..., 300; floating-point version */
void main()
 {
 	float fahr, celsius;
	float lower, upper, step;
 	lower = 0; /* lower limit of temperatuire scale */
	upper = 300; /* upper limit */
 	step = 20; /* step size */
 	fahr = lower;
	char head_f[12] = "Fahreneit";
	char head_c[9] = "Celsius";
	printf("\n=========================================\n");
	printf("Converting from Fahreneit to Celsius");
	printf("\n=========================================\n");
 	printf("%s\t %s\n", head_f, head_c);
 	while (fahr <= upper) 
	{
 		celsius = (5.0/9.0) * (fahr-32.0);
 		printf("%3.0f\t\t %6.1f\n", fahr, celsius);
 		fahr = fahr + step;
 	}

	printf("\n=========================================\n");
	printf("Converting from Celsius to Fahreneit");
	printf("\n=========================================\n");
 	printf("%s\t %s\n", head_c, head_f);
	celsius = lower;
 	while (celsius <= upper) 
	{
 		fahr = (celsius * 1.8) + 32.0;
 		printf("%3.0f\t %6.1f\n", celsius, fahr);
 		celsius += step;
 	}

 }

