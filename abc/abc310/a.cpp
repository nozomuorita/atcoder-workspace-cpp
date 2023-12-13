#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, p, q; cin>>n>>p>>q;
	vector<int> d(n);
	for(int i=0; i<n; i++) cin>>d[i];

	int ans=p;
	for(int i=0; i<n; i++){
		if(q+d[i]<ans) ans=q+d[i];
	}
	cout<<ans<<endl;
}
