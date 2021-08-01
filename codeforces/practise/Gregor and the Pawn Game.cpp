
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
int mod = 1e7 + 9;



void solve() {

	int n, ans = 0;
	cin >> n;

	string s1, s2;
	cin >> s1 >> s2;

	rep(i, n) {

		if (s2[i] == '1') {

			if (s1[i] == '0') {s1[i] = '2'; ans++;}
			else if (s1[i - 1] == '1')ans++;
			else if (s1[i + 1] == '1') {ans++; s1[i + 1] = '2';}
		}
	}

	cout << ans << "\n";


}


