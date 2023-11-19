#include<stdio.h>
#include<math.h>
void founction(int num1, int num2, int num3, int num4, int num5)
{
	double mean = (num1 + num2 + num3 + num4 + num5) / 5;
	double ele1 = pow((num1 - mean), 2);
	double ele2 = pow((num2 - mean), 2);
	double ele3 = pow((num3 - mean), 2);
	double ele4 = pow((num4 - mean), 2);
	double ele5 = pow((num5 - mean), 2);
	double var = (ele1 + ele2 + ele3 + ele4 + ele5) / 5;
	double value = sqrt(var);
	printf("Standard Deviation =  %.3f", value);


}

int main(void)
{
	int i;
	int arr[5];
	printf("Enter 5 real numbers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	founction(arr[0], arr[1], arr[2], arr[3], arr[4]);
	return 0;

}