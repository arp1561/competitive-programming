#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        set<int> b;
        for(int i=0;i<n;i++) b.insert(a[i]);
        cout<<n-b.size()<<"\n";
    }
}
