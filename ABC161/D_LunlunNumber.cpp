#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int K;
	cin >> K;

	queue<int> q;

	for (int i = 1; i < 10; i++) {
		q.push(i);
	}

	int x = 0;
	for (int i = 0; i < K; i++) {
		x = q.front();
		q.pop();
		if (x % 10 != 0) {
			q.push(10 * x + x % 10 - 1);
		}
		q.push(10 * x + x % 10);
		if (x % 10 != 9) {
			q.push(10 * x + x % 10 + 1);
		}
	}

	cout << x << endl;

	return 0;
}
