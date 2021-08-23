


void solve() {

	ll a, b;
	cin >> a >> b;

	ll d = b - a;

	ll ans = d;

	string x = to_string(a);
	string y = to_string(b);
	int pre = ans;
	int sd = y.size() - x.size();

	rep(i, sd)x = "0" + x;

	REPR(i, y.size() - 2, 0) {

		ll tt = int(x[i + 1] - 48);
		tt += pre;
		tt /= 10;
		ans += tt;
		pre = tt;
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
