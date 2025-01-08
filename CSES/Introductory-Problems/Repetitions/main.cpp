#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	string dna; cin >> dna;
	int mx = INT_MIN, curr = 1;
	char chcurr = dna[0];
	for (int i = 1; i < (int)dna.size(); i++) {
		if (dna[i] == chcurr) curr++;
		else {
			chcurr = dna[i];
			mx = max(mx, curr);
			curr = 1;
		}
	}
	cout << max(mx, curr);
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
