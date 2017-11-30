#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--)
    {
        int n,p; cin>>n>>p;
        int counte=0,counth=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(p%a[i]==0)
            {
                float x=float(a[i]);
                float px=float(p);
                int temp = x/px;
                if(temp>=0.5) counte++;
                if(temp<=0.10) counth++;
            }
        }
        if(counth==2 && counte==1) cout<<"yes\n";
        else cout<<"no\n";
    }
}
