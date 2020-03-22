#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n = 0;
	int ave = 0;

	cin >> n;

	vector<int> vec(n);

	for (int i = 0; i < n; i++) {
		cin >> vec.at(i);
	}

	for (int i = 0; i < n; i++) {
		ave += vec.at(i);
	}
	ave /= n;

	for (int i = 0; i < n; i++) {
		int result = 0;
		result = vec.at(i) - ave;
		if (result < 0) result *= -1;

		cout << result << endl;
	}

	return 0;
}
