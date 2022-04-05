#include<bits/stdc++.h>
#define int long long
using namespace std;

void weirdAlgorithm(int n)
{
	while(n!=1){
		cout<<n<<" ";
		if(n&1){
			n = n*3 + 1;
		}else{
			n/=2;
		}
	}
    cout<<1;
}
signed main()
{
	int n;
	cin>>n;
	weirdAlgorithm(n);
}