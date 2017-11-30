#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    cout<<pow(10,99);
    exit(0);
    int flag=0,n,t; cin>>n>>t;
    int num = pow(10,n-1);
    while(num<pow(10,n)-1)
    {
        if(num%t==0) 
        {
            cout<<num;
            flag++;
            break;
        }
        num++;
    }
    if(flag==0) cout<<-1;

}

