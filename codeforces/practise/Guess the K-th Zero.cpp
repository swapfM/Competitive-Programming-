




void solve() {

	int n, t, k;
	cin >> n >> t >> k;

	int l = 1, r = n, mid, in, ans = 0;

	while (l <= r) {

		mid = (l + r) / 2;

		cout << "? " << 1 << " " << mid << "\n";
		cout.flush();

		cin >> in;

		in = mid - in;


		if (in >= k)r = mid - 1, ans = mid;
		else l = mid + 1;

	}

	cout << "! " << ans << "\n";
	cout.flush();




}
