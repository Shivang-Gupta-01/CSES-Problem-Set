#include<bits/stdc++.h>
#define int long long
using namespace std;

void permutation(int n)
{

	// Place all evens first and then odds
	// For n<=3 & n!=1 it wont be possible
	vector<int> v;
	int j=2;  
	int i=1;

	while(j<=n){
		v.push_back(j);
		j+=2;
	}
	while(i<=n){
		v.push_back(i);
		i+=2;
	}

	if(n<=3 && n!=1){
		cout<<"NO SOLUTION";
		return;
	}
	else if(n==1){
		cout<<1;
		return;
	}else{
		for(auto val:v){
			cout<<val<<" ";
		}
	}
	
}
signed main()
{
	int n;
	cin>>n;
	permutation(n);
}