
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)




void solve() {

	vector<ll>v(3);

	rep(i, 3)cin >> v[i];

	ll ans = 0, tt = 0;

	ans = v[1] % v[2];

	tt = (v[0] - 1) / v[2];

	tt++;

	ans *= tt;

	tt = v[1] / v[2];

	ans += 1 + tt;
	cout << ans << "\n";

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



