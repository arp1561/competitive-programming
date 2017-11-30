#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int n,Q; cin>>n>>Q;
    vector<int> v;
    vector<vector<int>> vec(n,v);
    while(Q--)
    {
        int index,lastAns=0;
        int t,x,y; cin>>t>>x>>y;
        if(t==1)
        {
            index = (x+lastAns)%n;
            vec[index].push_back(y);
        }
        else if(t==2)
        {
            index = (x+lastAns)%n;
            lastAns = vec[index][y%vec[index].size()];
            cout<<lastAns<<endl;
        }
    }
            
    
}

