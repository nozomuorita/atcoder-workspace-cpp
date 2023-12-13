#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    cin>>n;
    for(int i=1; i<(n+1); i++){
        ans += (i*10000);
    }
    cout<<ans/n<<endl;
}