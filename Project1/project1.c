#include <stdio.h>
int main()
{
	int num1, num2, sum
	printf("please insert Number1:");
	scanf("%d",&num1);
	printf("please insert Number2:");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("sum of %d+%d=%d", num1, num2, sum);
	getch();
	return 0;
}