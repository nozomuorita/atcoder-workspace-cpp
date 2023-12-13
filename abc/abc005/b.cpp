#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=1000, t;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>t;
        if(t<ans) ans=t;
    }
    cout<<ans<<endl;
}