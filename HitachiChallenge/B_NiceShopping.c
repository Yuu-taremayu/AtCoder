#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int coupon_num = 0;
	char dummy;
	int i = 0;

	/* input each num */
	scanf("%d%c%d%c%d%c", &a, &dummy, &b, &dummy, &coupon_num, &dummy);

	char a_string[a];
	int a_price[a];
	int a_min = 0;
	char b_string[b];
	int b_price[b];
	int b_min = 0;
	int coupon_array[3][coupon_num];
	
	scanf("%[^\n]%c", a_string, &dummy);
	scanf("%[^\n]%c", b_string, &dummy);
	for (i = 0; i < coupon_num; i++) {
		scanf("%d%c%d%c%d%c", &coupon_array[0][i], &dummy, &coupon_array[1][i], &dummy, &coupon_array[2][i], &dummy);
	}

	/* reshape string to num*/
	for (i = 0; i < a; i++) {
		a_price[i] = atoi(&a_string[i]);
	}
	for (i = 0; i < b; i++) {
		b_price[i] = atoi(&b_string[i]);
	}

	/* calc min both A and B*/
	a_min = a_price[0];
	for (i = 1; i < a; i++) {
		if (a_price[i] < a_min) a_min = a_price[i];
	}
	b_min = b_price[0];
	for (i = 1; i < b; i++) {
		if (b_price[i] < b_min) b_min = b_price[i];
	}

	/* calc min price */
	int min_price = 0;
	int temp = 0;

	min_price = a_price[coupon_array[0][0] - 1] + b_price[coupon_array[1][0] - 1] - coupon_array[2][0];
	temp = a_price[coupon_array[0][1] - 1] + b_price[coupon_array[1][1] - 1] - coupon_array[2][1];
	if (temp < min_price) temp = min_price;
	
	if (coupon_num != 1) {
		for (i = 1; i < coupon_num; i++) {
			temp = a_price[coupon_array[0][i] - 1] + b_price[coupon_array[1][i] - 1] - coupon_array[2][i];

			if (temp < min_price) temp = min_price;
		}
	}

	if (a_min + b_min < min_price) min_price = a_min + b_min;

	printf("%d\n", min_price);

	return 0;
}
