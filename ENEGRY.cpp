#include <bits/stdc++.h>
using namespace std;
// Trịnh Xuân Đạt - Bổ Xung Năng Lượng
ifstream fi ("ENERGY.inp");
ofstream fo ("ENERGY.out");
int n,x,y,ans=0,k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fi >> n;
    priority_queue <int> a,p;
    for(int i=0;i<2*n;++i){
        fi >> x >> y;
        if(x<y){
            ans+=x;
            p.push(y-x);
        }
        else{
            ans+=y;
            a.push(x-y);
        }
    }
    k = (n<a.size()?n:a.size());
    while(k--){
        ans+=a.top();
        a.pop();
    }
    k = (n<p.size()?n:p.size());
    while(k--){
        ans+=p.top();
        p.pop();
    }
    fo<<ans;
    return 0;
}
