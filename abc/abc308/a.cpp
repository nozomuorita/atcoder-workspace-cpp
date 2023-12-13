#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
	vector<int> s(8);
	rep(i, 8) cin>>s[i];

	bool ans=true;
	rep(i, 7){
		if(s[i]>s[i+1]){ans=false; break;}
	}
	rep(i, 8){
		if(s[i]<100 || s[i]>676){ans=false; break;}
		if(s[i]%25!=0){ans=false; break;}
	}

	cout<<(ans ? "Yes": "No")<<endl;
}
