#include<stdio.h>

int Binary_code(int num)
{
	if (num > 0)
	{	
		Binary_code(num /2);
		printf("%d", num %2 );
		
		
	}
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	Binary_code(num);
	printf("\n");
	return 0;
}
