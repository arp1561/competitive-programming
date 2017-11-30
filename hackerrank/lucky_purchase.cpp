#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool sortbysec(const pair<string,int> &a,const pair<string,int> &b)
{
    return (a.second < b.second);
}
signed main()
{

    int n; cin>>n;
    vector< pair<string,int> >  vec;
    
    loop(i,0,n)
    {
        string str,temp; cin>>str;
        int in; cin>>in;
        temp = to_string(in);
        if(count(temp.begin(),temp.end(),'4')!=0 && count(temp.begin(),temp.end(),'7')!=0)
        {
            vec.push_back(make_pair(str,in));
        }
    }

	sort(vec.begin(),vec.end(),sortbysec);
	for(const auto& p:vec) cout<<p.first<<" "<<p.second<<"\n";



}

