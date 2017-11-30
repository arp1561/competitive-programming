#include<bits/stdc++.h>
#define int long long
using namespace std;
int binSear(int a[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid = l+(r-l)/2;
        if(a[mid] == x) return mid;
        if(a[mid]>x) return binSear(a,l,mid-1,x);
        return binSear(a,mid+1,r,x);
    }
    return -1;
}

signed main()
{
    int x,n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter the element to find :";
    cin>>x;
    int res = binSear(a,0,n-1,x);
    cout<<res;
}
