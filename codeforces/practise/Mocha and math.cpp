



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


