#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	long long n; cin >> n;
	while (n != 1) {
		cout << n << ' ';
		if (n % 2 == 0) n /= 2;
		else n = 3*n + 1;
	}
	cout << "1";
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
