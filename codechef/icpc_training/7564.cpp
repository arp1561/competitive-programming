#include<bits/stdc++.h>
#define int long long
using namespace std;
int t1(int e,int m,int h)
{
    if(e>=1 && m>=1 && h>=1) return 1;
    return 0;
}
int t2(int e,int m,int h)
{
    if(e>=1 && m>=2) return 1;
    return 0;
}
int t3(int e,int m,int h)
{
    if(e>=2 && m>=1) return 1;
    return 0;
}
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        int e,m,h; cin>>e>>m>>h;
        int count1=0,count2=0,count3=0;
        while(true)
        {
            if(t1(e,m,h)==1) {e--; m--; h--; count1++;}
            else if(t2(e,m,h)==1 && count2<=count1) {e--;m-=2;count2++;}
            else if(t3(e,m,h)==1 && count3<=count2) {e-=2;m--;count3++;}
            else break;
        }
        cout<<count1+count2+count3<<endl;
    }
}
