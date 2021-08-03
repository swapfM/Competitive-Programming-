



void solve()
{

	ll n;
	cin >> n;



	ll a = sqrt(n);

	ll ans = a - 1;
	ans += (n / a) - 1;

	n % a == 0 ? cout << ans : cout << ans + 1 ;

	cout << "\n";





	return;





}


