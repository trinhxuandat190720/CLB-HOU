#include <bits/stdc++.h>
#define NAME "SANDSTORM"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int a,b;
int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> a>>b;
    int c = b-a;
    fo << b - (c*(c+1)/2);
    return 0;
}
