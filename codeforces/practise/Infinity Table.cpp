

void solve() {


	ll n;
	cin >> n;

	ll a = sqrt(n);

	int r = 0;
	if (pow(a, 2) == n)r = a;
	else r = a + 1;


	ll s = pow(r - 1, 2);
	ll rem = n - s;


	if (rem <= r)cout << rem << " " << r << "\n";
	else cout << r << " " << 2 * r - rem << "\n";
	return;


}



