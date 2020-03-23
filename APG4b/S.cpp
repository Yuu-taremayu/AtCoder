#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N = 0;
	int S = 0;
	int flag = 0;

	cin >> N >> S;

	vector<int> A(N);
	vector<int> P(N);

	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}

	for (int i = 0; i < N; i++) {
		cin >> P.at(i);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (S == A.at(i) + P.at(j)) {
				flag++;
			}
		}
	}

	cout << flag << endl;

	return 0;
}
