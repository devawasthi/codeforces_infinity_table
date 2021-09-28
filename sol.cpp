#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      ll t;
      cin>>t;
      while(t--)
      {
            ll k;
            cin>>k;
            ll jigg=ceil((double)sqrt(k));
            ll m=sqrt(k);
            m*=m;
            if(k-m==0)
            cout<<jigg<<" "<<1<<endl;
            else if(k-m<=jigg)
            cout<<k-m<<" "<<jigg<<endl;
            else
            {
                  ll x=jigg*jigg;
                  cout<<jigg<<" "<<x-k+1<<endl;
            }
            
            
      }
}
