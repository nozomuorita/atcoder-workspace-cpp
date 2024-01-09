#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n; cin>>n;
    string ans[n][n];
    ans[(n-1)/2][(n-1)/2] = "T";

    int idx=1;
    rep(i, (n-1)/2){
        pair<int, int> pos=make_pair(i, i);
        rep(d, 4){
            if(d==0){
                rep(j, n-(2*i)){
                    ans[pos.first][pos.second] = to_string(idx);
                    if(j!=n-(2*i)-1) pos.second++;
                    idx++;
                }
            }
            else if(d==1){
                pos.first++;
                rep(j, n-(2*i)-1){
                    ans[pos.first][pos.second] = to_string(idx);
                    if(j!=n-(2*i)-2) pos.first++;
                    idx++;
                }
            }
            else if(d==2){
                pos.second--;
                rep(j, n-(2*i)-1){
                    ans[pos.first][pos.second] = to_string(idx);
                    if(j!=n-(2*i)-2) pos.second--;
                    idx++;
                }
            }
            else{
                pos.first--;
                rep(j, n-(2*i)-2){
                    ans[pos.first][pos.second] = to_string(idx);
                    if(j!=n-(2*i)-3) pos.first--;
                    idx++;
                }
            }
        }
    }

    rep(i, n){
        rep(j, n){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}