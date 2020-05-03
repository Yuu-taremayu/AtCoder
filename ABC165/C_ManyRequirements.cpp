#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N, M, Q;

	cin >> N >> M >> Q;

	vector<int> a(Q);
	vector<int> b(Q);
	vector<int> c(Q);
	vector<int> d(Q);

	for (int i = 0; i < Q; i++) {
		cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
	}

	int point = 0;
	for (int i = 0; i < Q; i++) {
		if (b.at(i) - a.at(i) == c.at(i)) point += d.at(i);
	}

	cout << point << endl;
	return 0;
}
