#include <bits/stdc++.h>
#define NAME "TROIKA"
using namespace std;
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int n,k,p,q;
int64_t ans=0;
set<int> s;
bool flg=false;

int main()
{
    fi >> n;
    k=1,p=2; s.insert(p*p);
    while(n/k>=9){
        flg = true;
        if(k==p*p) {
            ++k; ++p; s.insert(p*p);
        }
        for(int t:s){
            if(k%t==0) {
                ++k; flg=false;
            }
        }
        if(!flg) continue;
        q=floor(sqrt(n/k))+1;
        if(q*q>n/k)--q;
        ans+=(int64_t) q*(q-1)*(q-2)/6;
        ++k;
    }
    fo << ans;
    return 0;
}
