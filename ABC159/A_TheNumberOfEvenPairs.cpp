#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n = 0;
	int m = 0;
	int result = 0;

	cin >> n >> m;

	result = n * (n - 1) / 2 + m * (m - 1) / 2;

	cout << result << endl;

	return 0;
}
