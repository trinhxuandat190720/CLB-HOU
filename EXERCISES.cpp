#include <bits/stdc++.h>
#define NAME "EXERCISES"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int t,a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> t;
    while(t--){
        fi >> a>>b;
        if((a+b)&1)fo<<"NO\n";
        else fo << (a+b)/2 <<'\n';
    }
    return 0;
}
