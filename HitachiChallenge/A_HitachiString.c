#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[10];
	int len = 0;
	int flag = 0;
	int i;

	scanf("%s", string);

	len = strlen(string);

	if (len % 2 == 1) printf("No\n");
	else {
		for (i = 0; i < len; i += 2) {
			if (string[i] == 'h' && string[i + 1] == 'i');
			else {
				flag++;
			}
		}
		if (flag == 0) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
