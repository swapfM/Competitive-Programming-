
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



void solve() {

	vector<int>v(4, 0);
	unordered_map<int, int>mp;
	int a = 1;

	rep(i, 4) {
		cin >> v[i];
		mp[v[i]]++;
		mp[v[i]] > a ? a = mp[v[i]] : a;
	}

	if (a <= 2)cout << "2\n";
	else if (a == 3)cout << "1\n";
	else cout << "0\n";
	return;

}


