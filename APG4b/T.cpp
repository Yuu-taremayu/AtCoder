#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N = 0;
	int M = 0;

	cin >> N >> M;

	vector<vector<char>> data(N, vector<char>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			data.at(i).at(j) = '-';
		}
	}

	for (int i = 0; i < M; i++) {
		int win = 0;
		int lose = 0;

		cin >> win >> lose;

		data.at(win - 1).at(lose - 1) = 'o';
		data.at(lose - 1).at(win - 1) = 'x';
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << data.at(i).at(j);
			if (j != N - 1) cout << " ";
		}
		cout << endl;
	}

	return 0;
}
