#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long int X;

	cin >> X;

	long double deposit = 100;
	int year = 0;
	while (true) {
		deposit = deposit + floor(deposit * 0.01);
		year++;
		if (deposit >= X) break;
	}

	cout << year << endl;
	return 0;
}
