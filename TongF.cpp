#include <bits/stdc++.h>
#define NAME "TongF"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
long long x,y;
long long n,a,ans,tg[4];
const long long p = 1e9;
void mp(long long x[],long long y[],long long z[])
      {
          tg[0]=(x[0]*y[0]+x[1]*y[2])%p;
          tg[1]=(x[0]*y[1]+x[1]*y[3])%p;
          tg[2]=(x[2]*y[0]+x[3]*y[2])%p;
          tg[3]=(x[2]*y[1]+x[3]*y[3])%p;
          z[0]=tg[0];
          z[1]=tg[1];
          z[2]=tg[2];
          z[3]=tg[3];
}
long long fib(long long x){
          long long t[4]= {0,1,1,1},r[4]= {0,1,1,1};
           while(x)
          {
              if(x&1)
                  mp(r,t,r);
              mp(t,t,t);
              x>>=1;
          }
          return r[2]%p;
}
void solve(){
    int64_t ans = (fib(y+2)%p) - (fib(x+1)%p);
    fo << ans%p<<'\n';
}
main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    while(fi>>x>>y){
        solve();
    }
    return 0;
}
