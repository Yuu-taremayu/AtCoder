#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	unsigned long int N, K;
	cin >> N >> K;

	unsigned long int min_num = N % K;

	if (min_num > -1 * (min_num - K)) min_num = -1 * (min_num - K);
	cout << min_num << endl;
	return 0;
}
