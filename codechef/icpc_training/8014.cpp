#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int a,n; cin>>a>>n;
        n++;
        (n%a==0)?cout<<n/a<<endl:cout<<"-1\n";
    }

}

