#include <bits/stdc++.h>
using namespace std;
// Trịnh Xuân Đạt
ifstream fi ("CF.inp");
ofstream fo ("CF.out");
stringstream ss;
float r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    fi >> s;
    char c = s[s.size()-1];
    if(c>96)c-=32;
    s.erase(s.size()-1,1);
    ss<< s;
    ss>> r;
    if(c=='C'){
        r = r*((9*1.0)/5)+32;
        c= 'F';
    }
    else{
        r = (r-32)*((5*1.0)/9);
        c='C';
    }
    fo<<fixed<<setprecision(2)<<r<<c<<"\n";
    return 0;
}
