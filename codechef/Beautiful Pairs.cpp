
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {

	int n;
	cin >> n;
	ll res = 0;
	ll tt = 0;


	unordered_map<int, int>mp;

	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mp[v[i]]++;
	}



	for (int i = 0; i < n - 1; i++) {

		tt = n - i - mp[v[i]] ;

		res += tt;
		mp[v[i]]--;
	}

	res *= 2;

	cout << res << "\n";



}



