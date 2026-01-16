#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000007;
int d[MAXN];

using ll = long long;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)

// nếu chắn => hợp số, lẻ: loại ptu lẻ

void sang()
{
    d[0] = d[1] = 1;
    for (int i = 2; i * i < MAXN; i++)
        if (d[i] == 0)
            for (int j = i * i; j < MAXN; j += i)
                d[j] = 1;
}

int main()
{
    fastio;
    sang();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (d[sum]==1)
        {
            cout << n << endl;
            for (int i = 0; i < n; i++)
                cout << i + 1 << " ";
            cout << endl;
        }
        else
        {
            int vt = 1;
            for (int i = 0; i < n; i++)
                if (a[i] % 2 != 0)
                {
                    vt = i + 1;
                    break;
                }
            cout << n - 1 << endl;
            for (int i = 0; i < n; i++)
            {
                if (i + 1 != vt)
                    cout << i + 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
