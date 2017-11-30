#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
#define output(arr,a,b) for(int i=a;i<b;i++) cout<<arr[i]<<" ";
using namespace std;
signed main()
{
    int a,n,k; cin>>a>>n>>k;
    int arr[k]={0};
    for(int i=1;i<=a;i++)
    {
        int j=0,count=0;
        arr[j]+=1;
        while(j<=k)
        {
            if(j<k-1 && arr[j]>n) arr[j]=0,count=1, arr[j+1]+=count;
            else if(j==k-1 && arr[j]>n) arr[j]=0;
            j++;
        }
    }
    output(arr,0,k);
    cout<<endl;
}

