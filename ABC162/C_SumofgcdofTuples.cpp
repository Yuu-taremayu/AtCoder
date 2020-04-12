#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	int x = 0;

	if (b == 0) return a;
	else x = gcd(b, a % b);

	return x;
}

int main(void)
{
	int K;
	cin >> K;

	int64_t sum = 0;

	for (int i = 1; i < K + 1; i++) {
		for (int j = 1; j < K + 1; j++) {
			for (int k = 1; k < K + 1; k++) {
				sum += gcd(gcd(i, j), k);
			}
		}
	}

	cout << sum << endl;

	return 0;
}
