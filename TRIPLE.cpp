#include <bits/stdc++.h>
#define NAME "TRIPLE"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
const int p = 1e9+7;
int64_t n,ans=0,o;
vector<int> A,B;
int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> n;
    A.resize(n+1); B.resize(n+1);
    for(int i=1;i<=n;++i)
    {
        fi >> A[i];
        B[i] = (B[i-1]+A[i])%p;
    }
    for(int i=1;i<=n;++i)
    {
        o = B[i-1] * (B[n]-B[i])%p;
        ans = (ans+o*A[i])%p;
    }
    fo << ans;
    return 0;
}
