#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <= n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)




void solve() {


	int n;
	cin >> n;
	
		vector<int>v[n];

		vector<pair<int,int>>m;
		

		rep(i,n){

			int cc,a,mx=0;
			cin>>cc;
			rep(j,cc){

				cin>>a;

				a-=i+1;
				mx = max(a,mx);

				v[i].push_back(a);

			}

			m.push_back(make_pair(mx,cc));
		}

		sort(m.begin(),m.end());

		int ans = 0;

		




	

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
