#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {


	ll n;
	cin >> n;
	vector<int>v;

	REP(i, 1, 2000) {
		if (i % 3 != 0 && i % 10 != 3)v.push_back(i);
	}
	cout << v[n - 1] << "\n";
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


