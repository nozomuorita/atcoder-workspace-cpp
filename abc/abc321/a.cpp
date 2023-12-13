#include <bits/stdc++.h>
using namespace std;

int main(){
	string n; cin>>n;
	bool ans=true;
	for(int i=0; i<n.size()-1; i++){
		if(n[i]<=n[i+1]){ans=false; break;}
	}

	cout<<(ans ? "Yes": "No")<<endl;
}
