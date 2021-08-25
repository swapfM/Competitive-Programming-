



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




