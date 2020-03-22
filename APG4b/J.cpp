#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x = 0;
	int a = 0;
	int b = 0;

	cin >> x >> a >> b;

	x++;
	cout << x << endl;

	x *= (a + b);
	cout << x << endl;

	x *= x;
	cout << x << endl;

	x--;
	cout << x << endl;

	return 0;
}
