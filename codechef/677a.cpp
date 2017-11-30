#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int n,h,width=0; cin>>n>>h;
    int a[n];
    input(a,n);
    loop(i,0,n) (a[i]>h)?width+=2:width+=1;
    cout<<width;
}

