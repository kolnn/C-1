#include<stdio.h>

typedef struct city
{
	char name[20];
	char country[20];
	int population;
}City;

int main(void)
{
	City arr[3];
	int i;
	printf("input three citites: \n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name> "); scanf("%s", arr[i].name);
		printf("Country> "); scanf("%s", arr[i].country);
		printf("Population> "); scanf("%d", &arr[i].population);
	}

	printf("Printing the three cities\n");
	for (int i = 0; i < 3; i++)
		printf("%s in %s with a population of %d people\n", arr[i].name, arr[i].country, arr[i].population);

	return 0;
}
