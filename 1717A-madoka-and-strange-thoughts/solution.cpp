#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

// ll gcd(ll a, ll b)
// {
//     if(b==0) return a;
//     return gcd(b, a%b);
// }

// ll lcm(ll a, ll b)
// {
//     return a/gcd(a,b)*b;
// }

int main() {
    fastio;
    int t; cin >> t;
    while(t--)
    {
        int n; cin>>n;
        cout<< n + (int)(n/2) * 2 + (int)(n/3) * 2<<endl;
    }
    

    return 0;
}
