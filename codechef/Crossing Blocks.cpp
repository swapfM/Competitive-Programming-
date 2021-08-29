#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)





void solve() {

	int n;
	cin >> n;

	vector<ll>v(n);
	ll ans = 0;

	rep(i, n)cin >> v[i];

	rep(i, n)if (v[i] > v[0]) {
		cout << "-1\n"; return;
	}


	stack<ll>s;

	REP(i, 1, n - 1) {

		while (s.size() && s.top() <= v[i])s.pop();
		s.push(v[i]);

	}

	while (s.size()) {

		ans++;

		s.pop();
	}

	cout << ans << "\n";




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
	while (t--)
		solve();


}
