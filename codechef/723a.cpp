#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
int distance(int a,int b)
{
    int dist = sqrt(pow((a-b),2));
    return dist;
}
signed main()
{
    int a[3]; 
    input(a,3); 
    sort(a,a+3);
    cout<<a[1]-a[0]+a[2]-a[1];

}
    

