#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {

	int n;
	cin >> n;

	ll s = 0, a, m = -9999999999;

	rep(i, n) {
		cin >> a;
		s += a;
		m = max(m, a);

	}
	double ans = m + (double)(s - m) / (n - 1);
	cout << setprecision(16) << ans << "\n";
	return;




}



