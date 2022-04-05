#include<bits/stdc++.h>
#define int long long
using namespace std;
void maximumRepetition(string s)
{
	int n = s.length();
	int maxs=INT_MIN;
	int curr=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]!=s[i-1]){
			maxs = max(maxs,curr);
            curr=1;
		}else{
			curr++;
		}
	}
	maxs = max(maxs,curr);
	cout<<maxs;
}
signed main()
{
	string str;
	cin>>str;
    maximumRepetition(str);
}