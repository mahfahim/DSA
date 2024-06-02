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
    // 2352
    map<int,int> cnt;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
              cnt[i]++;
              n=n/i;
            }
        }
    }
    if(n>1)
    {
        cnt[n]++;
    }
    for(auto [x,y]:cnt)
    {
        cout << x <<"^"<< y << endl;
    }
//     2^4
//     3^1
//     7^2

    return 0;
    //********* Alhamdulillah *********
}
