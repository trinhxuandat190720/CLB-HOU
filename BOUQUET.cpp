#include <bits/stdc++.h>
#define NAME "BOUQUET"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int n,a,ans=0,b=1025;
int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> n;
    for(int i=0;i<n;++i){
        fi >> a;
        ans+=a-(1-(a&1));
        b=min(b,a);
    }
    fo << (ans-b*(1-(b&1)));
    return 0;
}
