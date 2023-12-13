#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
	int k, g, m; cin>>k>>g>>m;
	int glass=0, mug=0;
	rep(i, k){
		if(glass==g) glass=0;
		else if(mug==0) mug=m;
		else{
			if(mug<=(g-glass)){glass+=mug; mug=0;}
			else{
				int d=g-glass;
				glass=g;
				mug-=d;
			}
		}
	}
	cout<<glass<<" "<<mug<<endl;
}
