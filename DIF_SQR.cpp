#include <bits/stdc++.h>
#define NAME "DIR_SQR"
using namespace std;
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int64_t n;
int main()
{
    fi >> n;
    if(!(n&1) && n%4!=0)fo<<"No";
    else{
        if(n&1) fo <<"Yes\n"<<(n+1)/2<<' '<<(n-1)/2;
        else fo <<"Yes\n"<<(4+n)/4<<' '<<(n-4)/4;
    }
    return 0;
}
