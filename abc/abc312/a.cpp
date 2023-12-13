#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin>>s;
	vector<string> vec={"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
	bool ans=false;

	for(int i=0; i<vec.size(); i++){
		if(s==vec[i]){ ans=true; break;}
	}
	cout<<(ans ? "Yes": "No")<<endl;
}
