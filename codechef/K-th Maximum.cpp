#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)





void solve() {

	ll n, k;
	cin >> n >> k;

	vector<ll>v(n);
	ll m = -99999999;

	rep(i, n) {
		cin >> v[i];
		m = max(m, v[i]);
	}

	vector<ll>l;

	rep(i, n) {

		if (m == v[i])l.push_back(i + 1);

	}


	ll ls = l.size();
	ll ans = 0;

	rep(i, ls) {


		if (l[i] >= k) {

			ans += (n - l[i] + 1);
		}

	}

	cout << ans << "\n";




}





int main()
{

	int t;
	cin >> t;
	while (t--)
		solve();


}
