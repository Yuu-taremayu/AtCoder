#include <stdio.h>

int main(void)
{
	char string[3];
	int i;
	int cnt = 0;

	scanf("%s", string);

	for (i = 0; i < 3; i++) {
		if (string[i] == '1') cnt++;
	}

	printf("%d\n", cnt);

	return 0;
}
