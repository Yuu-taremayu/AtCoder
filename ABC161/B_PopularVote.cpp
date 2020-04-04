#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	
	vector<int> A(N);

	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += A.at(i);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (A.at(i) >= (float)sum / (4 * M)) cnt++;
	}

	if (cnt >= M) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
