#include <stdio.h>

int main(void)
{
	unsigned long n = 0;
	unsigned long a = 0;
	unsigned long b = 0;
	char d;

	scanf("%ld%c%ld%c%ld", &n, &d, &a, &d, &b);

	if (a == 0) {
		printf("%ld\n", a);
	}
	else if (b == 0) {
		printf("%ld\n", n);
	}
	else if ((n % (a + b)) == 0) {
		printf("%ld\n", a * (n / (a + b)));
	}
	else {
		if (n % (a + b) < a) {
			printf("%ld\n", a * (n / (a + b)) + n % (a + b));
		}
		else {
			printf("%ld\n", a * (n / (a + b)) + a);
		}
	}

	return 0;
}
