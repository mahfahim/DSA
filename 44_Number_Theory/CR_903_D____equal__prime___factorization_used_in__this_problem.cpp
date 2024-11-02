//********* Bismillahir Rahmanir Rahim *********

// https://codeforces.com/problemset/problem/1881/D

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

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i] ;

        map<int,int> cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=ar[i];j++)
            {
                if(ar[i]%j==0)
                {
                    while(ar[i]%j==0)
                    {
                        cnt[j]++;
                        ar[i] /= j;
                    }
                }
            }
            if(ar[i]>1)
            {
                cnt[ar[i]]++;
            }
        }
        bool ok = true;
        for(auto [x,y]:cnt)
        {
            if(y%n!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
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

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++) cin >> ar[i] ;

        map<int,int> cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=ar[i];j++)
            {
                if(ar[i]%j==0)
                {
                    while(ar[i]%j==0)
                    {
                        cnt[j]++;
                        ar[i] /= j;
                    }
                }
            }
            if(ar[i]>1)
            {
                cnt[ar[i]]++;
            }
        }
        bool ok = true;
        for(auto [x,y]:cnt)
        {
            if(y%n!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
    //********* Alhamdulillah *********
}
