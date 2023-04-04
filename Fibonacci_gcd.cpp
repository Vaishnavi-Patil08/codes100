//https://www.hackerrank.com/challenges/fibonacci-gcd/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long



ll M=1000000007;

map<ll, ll> F;
ll f(ll n) {
    if (F.count(n)) return F[n];
    ll k=n/2;
    if (n%2==0) { // n=2*k
        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
    } else { // n=2*k+1
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
    }
}


ll gcd(ll a, ll b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    //ll mod= 1000000007;
    //vector<ll> a(n);
    cin>>n;
    ll temp;
    cin>>temp;
        
        ll g=temp;
        //g=g%mod;
        //cout<<g<<endl;
        for(ll i=1;i<n;i++)
        {
            if(g!=1 && g!=2)
              {          
               cin>>temp;
              // temp=fastfib(temp);
            //cout<<g<<" "<<temp<<endl;
            g = gcd(temp,g);
            
            
            }
            else
            {
                cin>>temp;
            }
            
        }
        //cout<<g<<endl;
        //g=g%1000000007;
        F[0]=F[1]=1;
        cout << (g==0 ? 0 : f(g-1)) << endl;
    
    
    return 0;
}
