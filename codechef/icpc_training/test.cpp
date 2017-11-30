#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{   
    int facto=1;
    while(n>0) 
    {
        facto*=n;
        n--;
    }
}
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int> a(arr,arr+n);
    for(int i=0;i<fact(n);i++)
    {
        next_permutation(a.begin(),a.end());
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}
    
