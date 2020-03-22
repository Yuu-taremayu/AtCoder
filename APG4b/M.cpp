#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	int cnt = 1;

	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == '+') {
			cnt++;
		}
		else if (s.at(i) == '-') {
			cnt--;
		}
	}

	cout << cnt << endl;

	return 0;
}
