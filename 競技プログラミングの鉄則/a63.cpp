#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int n, m;
vector<int> g[100009];
int a[100009], b[100009];
int dist[100009];
queue<int> q;

int main(){
    cin>>n>>m;
    rep(i, m){
        cin>>a[i]>>b[i];
        a[i]--; b[i]--;
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }

    rep(i, n){
        dist[i]=-1;
    }
    dist[0] = 0;

    q.push(0);
    while(!q.empty()){
        int v = q.front(); q.pop();

        for(int i=0; i<g[v].size(); i++){
            if(dist[g[v][i]]!=-1) continue;
            dist[g[v][i]] = dist[v] + 1;
            q.push(g[v][i]);
        }
    }

    rep(i, n) cout<<dist[i]<<endl;
}