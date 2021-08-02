
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
ll mod = 1e10 + 9;



void solve()
{

	int n;
	cin >> n;

	vector<ll>v(n), ans;

	rep(i, n)cin >> v[i];


	ans.push_back(0);

	REP(i, 1, n - 1) {

		ll tt = v[i] & v[i - 1];

		tt ^= v[i - 1];

		ans.push_back(tt);

		v[i] ^= tt ;
	}

	rep(i, n)cout << ans[i] << " ";

	cout << "\n";


	return;





}


