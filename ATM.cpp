#include <bits/stdc++.h>
using namespace std;
#define NAME "ATM"
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> n;
    vector<int64_t> a(n);
    for(auto &i:a) fi >> i;
    vector<int64_t> mx(n-1),start(n),pref(n);
    start[0] = pref[0] = 0;
    for(int i=0; i+1<n;++i){
        mx[i] = (a[i+1]-1-start[i])/a[i];
        start[i+1] = start[i] + mx[i]*a[i];
        pref[i+1] = pref[i] + mx[i];
    }
    auto solve = [&](int64_t x)
    {
        auto i = prev(upper_bound(start.begin(), start.end(),x))- start.begin();
        auto coins = pref[i];
        x -= start[i];
        x -= (x%a[i]);
        auto new_x = start[i]+x;
        coins += x/a[i];
        return make_pair(new_x,coins);
    };
    int q;
    fi >> q;
    while(q--){
        int64_t x;
        fi >> x;
        auto res = solve(x);
        fo << res.first << ' ' << res.second << '\n';
    }
    return 0;
}
