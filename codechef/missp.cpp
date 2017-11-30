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
        int a[n]; input(a,n);
        loop(i,1,n) if(a[i]%2!=0) {cout<<i<<"\n";break;}
        
    }
}

