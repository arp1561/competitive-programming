#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> a(arr,arr+n);
        a.erase(unique(a.begin(),a.end()),a.end()); 
        cout<<n-a.size()<<endl;
    }
}
