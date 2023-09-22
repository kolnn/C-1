#include<stdio.h>

main(void)
{
	float num1, num2;
	printf("Please enter Kilometers: ");
	scanf("%f", &num1);
	num2 = num1 / 1.609;
	printf("%.1f km is equla to %.1f miles", num1, num2);
	return 0;

}