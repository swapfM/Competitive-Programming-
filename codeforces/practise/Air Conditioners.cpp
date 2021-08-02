
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
ll mod = 1e10 + 9;



void solve() {

	int n, k;
	cin >> n >> k;

	vector<ll>a(k), t(k);



	vector<ll>l(n + 2, mod), r(n + 2, mod);

	rep(i, k)cin >> a[i];

	rep(i, k) {
		cin >> t[i];
		l[a[i]] = t[i];
		r[a[i]] = t[i];
	}





	REP(i, 1, n) {

		l[i] = min(l[i - 1] + 1 , l[i]);

	}



	REPR(i, n, 1) {

		r[i] = min(r[i + 1] + 1, r[i]);
	}


	ll ans;

	REP(i, 1, n) {


		ans = min(l[i], r[i]);

		cout << ans << " ";
	}
	cout << "\n";

	return;



}




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {

		solve();

	}
}
