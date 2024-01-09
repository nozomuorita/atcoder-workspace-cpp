#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

int main(){
    int n, Q; cin>>n>>Q;
    deque<pair<int, int>> q;
    rep(i, n) q.push_back(make_pair(i+1, 0));

    rep(i, Q){
        int x; cin>>x;
        if(x==1){
            string c; cin>>c;
            pair<int, int> p = q.front();
            if(c=="L") p.first--;
            else if(c=="R") p.first++;
            else if(c=="D") p.second--;
            else p.second++;
            q.push_front(p);
            q.pop_back();
        }
        else{
            int p; cin>>p;
            cout<<q[p-1].first<<" "<<q[p-1].second<<endl;
        }
    }
}