

void solve() {

	int n;
	cin >> n;
	vector<ll>v(n + 1);


	REP(i, 1, n) {

		cin >> v[i];

	}
	int ans = 0;


	REP(i, 1, n) {

		ll st = v[i] - i;

		for (int j = st; j <= n; j += v[i]) {

			if (j > i)
				if (v[i] * v[j] == i + j && i < j)ans++;
		}

	}
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
	while (t--)
		solve();


}


