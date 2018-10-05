#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

	printf("enter two integer, and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf_s("%d%d", &num1, &num2);

	if (num1 == num2)
	{
		printf("%d is equal to %d\n" , num1, num2);	
	}
	if (num1 != num2)
	{
		printf("%d is not equal to %d\n" , num1, num2);
	}
	if (num1 < num2)
	{
		printf("%d is iess than %d\n" , num1, num2);
	}
	if (num1 > num2)
	{
		printf("%d is greater than %\n" , num1, num2);
	}
	if (num1 <= num2)
	{
		printf("%d is less than or equal to %\n" , num1, num2);
	}
	if (num1 >= num2)
	{
		printf("%d is greater than or equal to %\n" , num1, num2);
	}
	system("pause");
	return 0;
}