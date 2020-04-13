#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	vector <int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}

	map<int, int> dic;
	for (int i = 0; i < N; i++) {
		if (dic.count(A.at(i))) {
			dic.at(A.at(i)) += 1;
		}
		else {
			dic[A.at(i)] = 1;
		}
	}
	
	int max_key = -1;
	int max_value = -1;
	for (auto p : dic) {
		if (p.second > max_value) {
			max_key = p.first;
			max_value = p.second;
		}
	}
	cout << max_key << " " << max_value << endl;

	return 0;
}
