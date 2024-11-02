#include<bits/stdc++.h>
using namespace std;

long long nCr(int n,int r)
{
    long long lob=1,hor=1;
    for(int i=0;i<r;i++) lob *= (n-i);
    for(int i=1;i<=r;i++) hor *= i;
    return lob/hor;
}
int main()
{
    int n,r ;
    cin >> n >> r;
    cout << nCr(n,r) << endl;
    
    return 0;
}
