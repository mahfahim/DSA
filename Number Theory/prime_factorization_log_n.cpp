//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

vector<ll> all_prime_function(ll n)
{
    
    vector<bool> prime(n+1,true);
    vector<ll> all_prime;
    for(ll i=2;i*i<=n;i++)
    {
      if(prime[i])
      {
        for(ll j=i+i;j<=n;j+=i)
        {
            prime[j]=false;
        }
      }
    }

    for(int i=2;i<=n;i++)
    {
         if(prime[i]) all_prime.push_back(i);
    }
    return all_prime;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;//48
    vector<ll> ap;
    ap=all_prime_function(n);

    map<ll,ll> cnt;

    ll idx = 0;
    while(n>1)
    {
        if(n % ap[idx] == 0)
        {
            while(n % ap[idx] == 0)
            {
                cnt[ap[idx]]++;
                n=n/ap[idx];
            }
        }
        else
        {
            idx++;
        }
    }

    for(auto [x,y]:cnt)
    {
        cout << x << "^" << y << endl;
    }
    // 2^4
    // 3^1
    return 0;
    //********* Alhamdulillah *********
}
