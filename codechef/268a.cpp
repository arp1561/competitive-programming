#include<bits/stdc++.h>
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int n; cin>>n;
    int count=0;
    vector< pair<int,int> > vec;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back(make_pair(a,b));

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i!=j) count+=vec[i].first==vec[j].second;

        }
    }

    cout<<count;


}

