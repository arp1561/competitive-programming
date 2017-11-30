#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int n; cin>>n;
    float x = float(n);
    float a[n],total=0.0;
    input(a,n);
    loop(i,0,n) a[i]=a[i]/100.0, total+=a[i];
    cout<<(total/x)*100.0;
}   

