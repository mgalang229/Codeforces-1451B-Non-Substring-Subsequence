#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, q;
		string s;
		cin >> n >> q >> s;
		for (int i = 0; i < q; i++) {
			int l, r;
			cin >> l >> r;
			--l; --r;
			bool bad = true;
			// check if the first character of the substring appeared before the substring itself
			for (int j = 0; j < l && bad; j++) {
				if (s[j] == s[l]) {
					// if yes, then set 'bad' to false;
					bad = false;
				}
			}
			// check if the last character of the substring appeared after the substring itself
			for (int j = r + 1; j < n && bad; j++) {
				if (s[j] == s[r]) {
					// if yes, then set 'bad' to false;
					bad = false;
				}
			}
			// the answer will always be YES as long as one letter is not connected to all the remaining letters
			cout << (bad ? "NO" : "YES") << '\n';
		}
	}
	return 0;
}
