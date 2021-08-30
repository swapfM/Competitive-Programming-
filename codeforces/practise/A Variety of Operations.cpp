


void solve() {

	ll a, b;
	cin >> a >> b;


	ll d = b - a;

	if (d % 2 != 0)cout << "-1\n";
	else if (a + b == 0)cout << "0\n";
	else if (d == 0)cout << "1\n";
	else cout << "2\n";



}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}


}


