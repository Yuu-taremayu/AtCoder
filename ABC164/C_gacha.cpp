#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	vector<string> S(N);
	for (int i = 0; i < N; i++) {
		cin >> S.at(i);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int flag = 0;
		for (int j = 0; j < i; j++) {
			if (i != j && S.at(i).at(0) == S.at(j).at(0)) {
				if (S.at(i) == S.at(j)){
					flag++;
					break;
				}
			}
		}
		if (flag == 0 || i == 0) cnt++;
		flag = 0;
	}

	cout << cnt << endl;
	return 0;
}
