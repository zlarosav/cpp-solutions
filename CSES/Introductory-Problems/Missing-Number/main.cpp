#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	long long n; cin >> n;
	long long esperado = n*(n+1)/2;
	long long obtenido = 0;
	for (int i = 0; i < n-1; i++) {
		long long x; cin >> x;
		obtenido += x;
	}
	cout << esperado - obtenido;
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
