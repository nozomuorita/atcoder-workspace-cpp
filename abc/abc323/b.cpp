#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define yes cout << "Yes" << endl;
#define no  cout << "No"  << endl;

int main(){
    int n;
    cin >> n;
    vector<int> w(n,0);

    string s;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int j=0; j<n; j++){
            if(s.at(j)=='o') w.at(i)++;
        }
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n; j++){
            if(w.at(j)==i) cout << j+1 << " ";
        }
    }
}