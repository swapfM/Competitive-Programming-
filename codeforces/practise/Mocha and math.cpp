



void solve() {


	int n;
	cin >> n;

	vector<int>v(n);

	rep(i, n)cin >> v[i];

	sort(v.begin(), v.end());

	int ans = v[0];


	REP(i, 1, n - 1)ans &= v[i];

	cout << ans << "\n";
	return;


}


