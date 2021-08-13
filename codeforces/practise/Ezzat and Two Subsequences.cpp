

void solve() {

	int n;
	cin >> n;

	ll s = 0, a, m = -9999999999;

	rep(i, n) {
		cin >> a;
		s += a;
		m = max(m, a);

	}
	double ans = m + (double)(s - m) / (n - 1);
	cout << setprecision(16) << ans << "\n";
	return;




}



