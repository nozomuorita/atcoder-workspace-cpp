#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, l;
	cin>>n>>l;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	
	int ans=0;
	for(int i=0; i<n; i++){
		if(a.at(i)>=l) ans++;
	}
	cout<<ans<<endl;
}
