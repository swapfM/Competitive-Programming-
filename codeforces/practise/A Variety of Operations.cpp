#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)



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


