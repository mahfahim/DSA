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
    // 48
    vector<int> divisor;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            divisor.push_back(i);
            if(i!=(n/i))
            divisor.push_back(n/i);
        }
    }
    sort(divisor.begin(),divisor.end());
    for(auto u:divisor)
    {
        cout << u << " " ;
    }
    cout << endl;
    // 1 2 3 4 6 8 12 16 24 48 
    return 0;
    //********* Alhamdulillah *********
}
