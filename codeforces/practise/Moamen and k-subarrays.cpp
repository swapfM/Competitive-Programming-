


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
