#include <bits/stdc++.h>
using namespace std;

bool judge_abs(int a, int b)
{
	if (abs(a - b) <= 1) return true;
	else return false;
}

void increment_func(vector<int> &A)
{
	for (int i = 99; i > 1; i--) {
		if (A.at(i) == 9) {
			A.at(i
		if (A.at(i) == 0) {
			A.at(i) = A.at(i) + 1;
			break;
		}
		else {
			A.at(i) = (A.at(i) + 1) % 10;
			break;
		}
	}
}

int main(void)
{
	int K;

	cin >> K;

	vector<int> A(100, 0);

	for (int i = 0; i < 100; i++) {
		increment_func(A);
	}

	for (int i = 0; i < 100; i++) {
		cout << A.at(i);
	}
	cout << endl;
	return 0;
}
