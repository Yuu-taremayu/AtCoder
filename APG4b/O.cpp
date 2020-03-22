#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	cin >> a >> b >> c;

	cout << max(max(a, b), c) - min(min(a, b), c) << endl;
	return 0;
}
