#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long double l = 0;
	long double volume = 0;

	cin >> l;

	volume = l / 3;
	volume = volume * volume * volume;

	cout << volume << endl;
	return 0;
}
