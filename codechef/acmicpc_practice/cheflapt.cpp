#include<bits/stdc++.h>
#define int long long
#define input(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
#include<bits/stdc++.h>
using namespace std;
 
int numOfsubarrays(int arr[] , int n)
{
    int count = 0; // Initialize result
 
    for (int i=0; i<n; i++)
    {
        int product = arr[i];
        int sum = arr[i];
        for (int j=i+1; j<n; j++)
        {
            if (product==sum)
                count++;
 
            product *= arr[j];
            sum += arr[j];
        }
 
        if (product==sum)
            count++;
    }
    return count;
}
 
signed main()
{	
	int T; cin>>T;
	while(T--)
	{
		int n; cin>>n;
		int a[n];
		input(a,n);
	
	    cout << numOfsubarrays(a, n)<<endl;
	}



}
