


ll func1(ll n) {

	ll tt = n / 6;
	tt *=  15;

	if (n % 6 != 0)tt += 15;

	return tt;
}


ll func2(ll n) {

	ll tt = n / 8;
	tt *=  20;

	if (n % 8 != 0) {

		if ((n % 8) < 7)tt += 15;
		else tt += 20;
	}

	return tt;

}

ll func3(ll n) {

	ll tt = n / 10;
	tt *=  25;

	if (n % 10 != 0) {

		ll rem = n % 10;

		if (rem <= 6)tt += 15;

		else if (rem > 7 && rem <= 8)tt += 20;
		else if (rem == 9)tt += 25;
	}

	return tt;

}


void solve() {

	ll n;
	cin >> n;

	// ll ans = 0;

	// ll t6 = func1(n);

	// ll t8 = func2(n);

	// ll t10 = func3(n);

	// ans = min(t6, t8);

	// ans = min(ans, t10);

	// cout << ans << "\n";
	ll alt = 0;

	if (n <= 6) {
		alt = 15;
	}
	else {
		if (n % 2 != 0)n++;
		alt = (n * 5) / 2;
	}

	// ans = min(alt, ans);
	cout << alt << "\n";



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

