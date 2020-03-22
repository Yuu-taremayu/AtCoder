#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	int n = 0;
	int flag = 0;

	cin >> s;

	n = s.size();

	for (int i = 0; i < ((n - 1) / 2); i++) {
		if (s.at(i) != s.at(i + (n + 1) / 2)) {
			flag++;
		}
	}

	if (flag == 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}
