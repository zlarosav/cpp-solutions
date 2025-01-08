#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int& i : v) cin >> i;
	long long movs = 0;
	for (int i = 1; i < n; i++) {
		int delta = v[i-1] - v[i];
		if (delta > 0) {
			movs += delta;
			v[i] += delta;
		}
	}
	cout << movs;
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
