#include<bits/stdc++.h>
#define int long long
using namespace std;
void MissingNumber()
{
	int n;
	cin>>n;
	int res=0;
	int val;
	for(int i=1;i<n;i++){
		cin>>val;
		res ^= (val^i);

	}
	cout<<(res^n);
}
signed main()
{
	MissingNumber();
}