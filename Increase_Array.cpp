#include<bits/stdc++.h>
#define int long long
using namespace std;

void increaseArray(vector<int> &v, int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		res += (v[i-1]-min(v[i-1],v[i]));
		v[i] = max(v[i-1],v[i]); 
	}

	cout<<res;
}
signed main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	increaseArray(v,n);
}