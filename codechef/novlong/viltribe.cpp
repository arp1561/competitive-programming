#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
signed main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        vector< pair<char,int> > vec;
        int counta=0,countb=0;
        loop(i,0,s.length())
        {
            if(s[i]=='A') vec.push_back(make_pair('A',i+1)),counta++;
            else if(s[i]=='B') vec.push_back(make_pair('B',i+1)),countb++;
        }
        int vec_length = vec.size();
//	loop(i,0,vec_length) cout<<vec[i].first<<" "<<vec[i].second;
	loop(i,0,vec_length-1)
	{
		if(vec[i].first==vec[i+1].first && vec[i].first=='A') counta+=vec[i+1].second-vec[i].second-1;
		else if(vec[i].first==vec[i+1].first && vec[i].first=='B') countb+=vec[i+1].second-vec[i].second-1;
	}
	cout<<counta<<" "<<countb<<endl;
	
	
	        

        
    }


}

