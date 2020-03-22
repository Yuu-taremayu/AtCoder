#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int pattern = 0;
	string text;
	int price = 0;
	int n = 0;

	cin >> pattern;

	if (pattern == 2) {
		cin >> text;
	}
	cin >> price;
	cin >> n;

	if (pattern == 2) {
		cout << text << "!" << endl;
	}
	cout << price * n << endl;

	return 0;
}
