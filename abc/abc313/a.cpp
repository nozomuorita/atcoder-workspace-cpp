#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> p(n);
	for(int i=0; i<n; i++) cin>>p[i];

	int mx=-1;
	for(int i=1; i<n; i++){
		if(p[i]>mx) mx=p[i];
	}
	if(p[0]<=mx) cout<<mx-p[0]+1<<endl;
	else cout<<0<<endl;
}
