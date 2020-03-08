#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	char string[100];
	char dummy;

	scanf("%d", &a);
	scanf("%d%c%d", &b, &dummy, &c);
	scanf("%s", string);

	printf("%d %s\n", a + b + c, string);

	return 0;
}
