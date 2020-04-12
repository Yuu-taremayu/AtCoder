#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	int a = N / 100;
	int b = (N - (a * 100)) / 10;
	int c = (N - (a * 100) - (b * 10));

	if (a == 7 || b == 7 || c == 7) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
