#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
signed main()
{
    vector< vector<int> > arr(6,vector<int>(6));
    vector<int> s;
    int r1,r2,mid,total;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;

    for(int i=0,j=i+2;i<=3;i++,j++)
    {

        for(int k=0;k<=3;k++)
        {
            r1=0,r2=0,total=0;
            r1 = arr[i][k]+arr[i][k+1]+arr[i][k+2];
            r2 = arr[j][k]+arr[j][k+1]+arr[j][k+2];
            mid = arr[i+1][k+1];
            total = r1+r2+mid;
            s.push_back(total);
            
        }
    }
    cout<<*max_element(s.begin(),s.end())<<endl;
    
}

