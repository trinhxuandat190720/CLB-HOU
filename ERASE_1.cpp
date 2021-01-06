#include <bits/stdc++.h>
using namespace std;
// Trịnh Xuân Đạt - Xóa Số
ifstream fi ("ERASE_1.inp");
ofstream fo ("ERASE_1.out");
int n,p;
string s,ss,sx,sm;
bool cf = false;
void solve()
{
    fi>> s;
    if(s[0]=='-'){
        cf=true;
        s.erase(0,1);
    }
    p = s.size()-1;
    ss = s;
    for(int i=0;i<ss.size()-1;++i){
        if(ss[i]>ss[i+1]){
            p = i;
            break;
        }
    }
    sm = ss.erase(p,1);
    ss= s;
    p = s.size()-1;
    for(int i=0;i<ss.size()-1;++i){
        if(ss[i]<ss[i+1]){
            p=i;
            break;
        }
    }
    sx = ss.erase(p,1);
    if(cf){
        swap(sm,sx);
        while(sx.size()>1 && sx[0]=='0')
            sx.erase(0,1);
        sm= '-' + sm;
    }
    fo<<sm <<" "<<sx;
    fo<<'\n';
}

int main()
{
    fi >> n;
    while(n--){
        solve();
    }
}
