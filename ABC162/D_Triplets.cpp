#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	string S;

	cin >> N;
	cin >> S;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (S.at(i) != S.at(j)) {
				for (int k = j + 1; k < N; k++) {
					if (S.at(j) != S.at(k) && S.at(k) != S.at(i)) {
						if (j - i != k - j) cnt++;
					}
				}
			}
		}
	}

	cout << cnt << endl;
	return 0;
}
