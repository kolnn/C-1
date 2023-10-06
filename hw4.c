#include<stdio.h>
int main(void)
{
	int a;
	printf("Please enter a number : ");
	scanf("%d", &a);
	if (a % 2 != 0 || a % 3 != 0 || a % 5 !=0 || a% 7 !=0 || a % 9 != 0 || a % 11 != 0 || a % 13 != 0 || a % 17 !=0 || a % 19 != 0 ) 
		printf("it is a prime number");
	else
		printf("it is not a prime number");
	return 0;
}
