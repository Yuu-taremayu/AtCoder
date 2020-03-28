#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int K, N;
	cin >> K >> N;
	vector<int> position(N);
	for (int i = 0; i < N; i++) {
		cin >> position.at(i);
	}

	int max_dis = 0;
	int start_index = 0;
	int temp = 0;
	for (int i = 0; i < N; i++) {
		if ((i + 1) % N == 0) {
			temp = K - position.at(i);
		}
		else {
			temp = position.at(i + 1) - position.at(i);
		}

		if (temp < 0) temp = -1 * temp;

		if (temp > max_dis) {
			max_dis = temp;
			start_index = (i + 1) % N;
		}
	}
	cout << start_index << endl;

	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (position.at((i + 1 + start_index) % N) == 0) {
			sum += K - position.at((i + start_index) % N);
		}
		else {
			sum += position.at((i + 1 + start_index) % N) - position.at((i + start_index) % N);
		}
	}

//	cout << sum << endl;

	return 0;
}
