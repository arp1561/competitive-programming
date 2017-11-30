#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    int sum=0,temp,n,k;
    cin>>n>>k;
    int tl = (4*60)-k;
    int a[n];
    loop(i,1,n+1) a[i-1]=5*i;
    vector<int> vec(a,a+n);
    int i;
    temp = accumulate(vec.begin(),vec.begin()+n,0);
    if(temp<tl) cout<<n;
    else
    {
        loop(i,0,n+1)
        {
            sum = accumulate(vec.begin(),vec.begin()+i,0);
            if(sum==tl) 
            {
                cout<<i;
                break;
            }
            if(sum>tl)
            {
                cout<<i-1;
                break;
            }
    
        }
    }

}

