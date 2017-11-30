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
        int n,x; cin>>n>>x;
        int a[n],flag=1; 
        input(a,n);
        int sum = accumulate(a,a+n,0);
        int val = sum/x;
        int min = *min_element(a,a+n);
        if(sum%x==0) cout<<sum/x<<endl;
        else if(n==1 && sum>x) cout<<sum/x<<endl;
        else
        {
            if((sum-min)/x>=sum/x) cout<<"-1"<<endl;
            else cout<<sum/x<<endl;

        }
    }
}

