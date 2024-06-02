//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<bool> prime(n+5,true);
    prime[1]=false;
    for(int i=2;i*i<=n;i++)
    {
       if(prime[i])
       {
        for(int j=i+i;j<=n;j=j+i)
        {
            prime[j]=false;
        }
       }
    }

    for(int i=1;i<=n;i++)
    {
        if(prime[i]) cout << i <<" ";

    }
    cout << endl;

    return 0;
    //********* Alhamdulillah *********
}