#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> scores)
{
	int result = 0;
	int size = scores.size();

	for (int i = 0; i < size; i++) {
		result += scores.at(i);
	}

	return result;
}

void output(int sum_a, int sum_b, int sum_c)
{
	int result = 0;

	result = sum_a * sum_b * sum_c;

	cout << result << endl;

	return;
}

vector<int> input(int N)
{
	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	return vec;
}

int main(void)
{
	int N;

	cin >> N;

	vector<int> A = input(N);
	vector<int> B = input(N);
	vector<int> C = input(N);

	int sum_A = sum(A);
	int sum_B = sum(B);
	int sum_C = sum(C);

	output(sum_A, sum_B, sum_C);

	return 0;
}
