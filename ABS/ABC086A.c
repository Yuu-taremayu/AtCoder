#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	char dummy;

	scanf("%d%c%d", &a, &dummy, &b);

	if (a % 2 == 0 || b % 2 == 0) {
		printf("Even");
	}
	else {
		printf("Odd\n");
	}

	return 0;
}
