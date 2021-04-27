#include<bits/stdc++.h>
using namespace std;


 double fact(int);
double nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 

double fact(int n)
{
    double res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

double solve(string a, string b, int n, int m)
{
      int sa=0,sb=0,q=0;

      for(int i=0; i<n;i++)
      {
          if(a[i]=='+')sa++;
          else sa--;
      }

      for(int i=0;i<m;i++)
      {
          if(b[i]=='+')sb++;
          else if(b[i]=='-')sb--;
          else q++;
      }

      int diff= sa-sb;
      if(abs(diff)>q || abs(diff)%2!=q%2)return 0;
      else
      {
          double v = pow(2,q);
          double c = q-abs(diff);
          c/=2;

          double ans = nCr(q,c);
          ans/=v;

          return ans;

      }
}


int main()
{
    string a,b;
    cin>>a>>b;
    int n,m;
    n=a.length();
    m=b.length();

   cout<<setprecision(10)<<solve(a,b,n,m);

}
