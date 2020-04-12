#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	cin >> N;

	using pii = pair<int, int>;
	vector<pii> p(N);

	for (int i = 0; i < N; i++) {
		cin >> p.at(i).second >> p.at(i).first;
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++) {
		cout << p.at(i).second << " " << p.at(i).first << endl;
	}
	return 0;
}
