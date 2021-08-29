


void solve() {

	int n;
	cin >> n;

	vector<ll>v(n);
	unordered_map<ll, ll>mp;

	rep(i, n) {
		cin >> v[i];
		v[i] -= (i + 1);
		mp[v[i]]++;
	}

	ll ans = 1;

	rep(i, n - 1) {

		if (mp[v[i]] == n - i )ans++;

		mp[v[i]]--;

	}

	cout << ans << "\n";




}




