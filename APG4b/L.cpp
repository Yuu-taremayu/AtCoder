#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n = 0;
	int a = 0;
	int b = 0;
	string op;

	cin >> n;
	cin >> a;

	for (int i = 0; i < n; i++) {
		cin >> op >> b;

		if (op == "+") {
			a += b;
		}
		else if (op == "-") {
			a -= b;
		}
		else if (op == "*") {
			a *= b;
		}
		else if (op == "/") {
			if (b == 0) {
				cout << "error" << endl;
				break;
			}
			else {
				a /= b;
			}
		}
		cout << i + 1 << ":" << a << endl;
	}

	return 0;
}
