

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

