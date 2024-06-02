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

    int n,k;
    cin >> n >> k;//5 2
    int ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    // 100 200 300 400 500
    int max_sum = INT_MIN;
    int sum=0;
    for(int i=0;i<k;i++) sum += ar[i];
    
    max_sum=sum;

    for(int i=k;i<n;i++)
    {
        sum += ar[i] - ar[i-k]; 
        max_sum = max(max_sum,sum);
    }
    
    cout << max_sum << endl;// 900
    
    return 0;
    //********* Alhamdulillah *********
}