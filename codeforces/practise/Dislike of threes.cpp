#include<bits/stdc++.h>


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






