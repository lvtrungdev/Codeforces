#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int ans = 0;
    if (k > 235)
        cout << ans;
    else
    {
         int sum = k;
        for (int i = 1; i <= n; i++)
            if(sum + i*5 <=240)
            {
                ans = i;
                sum+=i*5;
            }
            else
                break;
        cout<<ans;
    }
}
