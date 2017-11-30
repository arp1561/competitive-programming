#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        string b = bitset<32>(n).to_string();
        size_t counter = count(b.begin(),b.end(),'1');
        cout<<counter<<endl;
    }
}

