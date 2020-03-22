#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a = 0;
	int b = 0;
	int i = 0;

	cin >> a >> b;

	cout << "A:";
	while (i < a) {
		cout << "]";
		i++;
	}
	cout << endl;

	i = 0;
	cout << "B:";
	while (i < b) {
		cout << "]";
		i++;
	}
	cout << endl;

	return 0;
}
