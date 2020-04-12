#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int64_t sum = 0;

	for (int i = 1; i < N + 1; i++) {
		if (i % 15 == 0 || i % 3 == 0 || i % 5 == 0);
		else sum += i;
	}
	cout << sum << endl;

	return 0;
}
