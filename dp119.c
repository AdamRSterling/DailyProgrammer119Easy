#include <stdio.h>

int main(int argc, char *argv[])
{
	float input;
	int quarters, dimes, nickels, pennies;
	printf("Amount: ");
	scanf_s("%f.\n", &input);
	
	int amount = (input * 100 + 0.5) / 100;

	printf("Quarters: %d\n", amount/25);
	amount %= 25;

	printf("Dimes: %d\n", amount/10);
	amount %= 10;

	printf("Nickels: %d\n", amount/5);
	amount %= 5;

	printf("Pennies: %d\n", amount);

	return 0;
}