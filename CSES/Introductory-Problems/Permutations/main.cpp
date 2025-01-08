#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	if (n == 1) {
		cout << "1";
		return;
	}
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return;
	}
	vector<int> v(n);
	int num = 2;
	for (int i = 0; i < n; i++) {
		v[i] = num;
		num += 2;
		if (num > n) num = 1;
	}

	for (int& i : v) {
		cout << i << ' ';
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	//cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}
