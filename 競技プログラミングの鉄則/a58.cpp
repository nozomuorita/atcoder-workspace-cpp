#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;
using ll=long long;

class SegmentTree{
public:
    int dat[300000], siz=1;

    // 要素datを0で初期化
    void init(int N){
        siz = 1;
        while(siz<N) siz*=2;
        for(int i=1; i<siz*2; i++) dat[i]=0;
    }

    // クエリ1(値更新)
    void update(int pos, int x){
        pos = pos + siz - 1;
        dat[pos] = x;
        while(pos>=2){
            pos /= 2;
            dat[pos] = max(dat[pos*2], dat[pos*2+1]);
        }
    }

    // クエリ2(最大値取得)
    // u は現在のセル番号、[a, b) はセルに対応する半開区間、[l, r) は求めたい半開区間
    int query(int l, int r, int a, int b, int u){
        if(r<=a || b<=l) return -1000000000;// 一切含まれない場合
        if(l<=a && b<=r) return dat[u]; // 完全に含まれる場合
        int m=(a+b)/2;
        int AnswerL = query(l, r, a, m, u*2);
        int AnswerR = query(l, r, m, b, u*2+1);
        return max(AnswerL, AnswerR);
    }
};

int n, q;
int query[100009], pos[100009], x[100009], l[100009], r[100009];
SegmentTree z;

int main(){

    cin>>n>>q;
    for(int i=1; i<=q; i++){
        cin>>query[i];
        if(query[i]==1) cin>>pos[i]>>x[i];
        if(query[i]==2) cin>>l[i]>>r[i];
    }

    z.init(n);
    for(int i=1; i<=q; i++){
        if(query[i]==1){
            z.update(pos[i], x[i]);
        }
        if(query[i]==2){
            int ans = z.query(l[i], r[i], 1, z.siz+1, 1);
            cout<<ans<<endl;
        }
    }
}