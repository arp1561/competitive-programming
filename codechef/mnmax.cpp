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
        int ops =0;
        vector<int> vec;
        loop(i,0,n) 
        {
            int x; cin>>x;
            vec.push_back(x);
        }
        cout<<(*min_element(vec.begin(),vec.end())*(n-1))<<endl;
    }
}

