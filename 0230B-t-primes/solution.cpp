#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000007;
int nt[MAXN];

void sang()
{

    nt[0]=nt[1]=1;

    for(int i=2;i*i<MAXN;i++)
    {
        if(nt[i]==0)
            for(int j=i*i;j<MAXN;j+=i)
                nt[j]=1;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        long long x; cin>>x;
        long long r = sqrt(x);
        if(nt[r]==0 && r*r==x)
            cout<<"YES"<<endl;
        else    
            cout<<"NO"<<endl;
    }
}
