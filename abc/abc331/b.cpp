#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s, m, l; cin>>n>>s>>m>>l;
	int ans=INT_MAX;
	int price;

	for(int i=0; i<20; i++){
		for(int j=0; j<20; j++){
			for(int k=0; k<20; k++){
				if(6*i+8*j+12*k>=n){
					price=s*i+m*j+l*k;
					if(price<ans) ans=price;
				}
			}
		}
	}
	cout<<ans<<endl;
}
