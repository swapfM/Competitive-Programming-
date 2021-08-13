#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {

	int n, k;
	cin >> n >> k;
	unordered_map<int, int>mp;
	vector<int>v(n);

	rep(i, n)cin >> v[i], mp[v[i]] = i;
	int ans = 1;

	sort(v.begin(), v.end());

	REP(i, 1, n - 1) {

		mp[v[i]] - mp[v[i - 1]] != 1 ? ans++ : 1;
	}

	ans <= k ? cout << "YES\n" : cout << "NO\n";

	return;


}


