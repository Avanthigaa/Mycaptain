#include <stdio.h>

int sod(int n)
{
	if (n == 0)
	return 0;
	return (n % 10 + sod(n / 10));
}

int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int result = sod(num);
	printf("\nSum of digits : %d",result);
	return 0;
}
