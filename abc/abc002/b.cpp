#include <bits/stdc++.h>
using namespace std;

int main(){
    string w, ans;
    cin>>w;
    for(int i=0; i<w.size(); i++){
        if(w.at(i)!='a' && w.at(i)!='i' && w.at(i)!='u' && w.at(i)!='e' && w.at(i)!='o'){
            ans+=w.at(i);
        }
    }
    cout<<ans<<endl;
}