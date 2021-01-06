#include <bits/stdc++.h>
#define NAME "SI"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
string s;
string kw = "tgkdcn";
int pw[] = {12,9,3,-1,-2,-9};
int a[] = {4,4,4,4,5,4};
int p=0,ans=0;
char c;
void solve()
{
    int d=0;
    int n=s.size();
    while(p<n-7){
        c = s[p];
        if(c=='m'){
            c=s[p+2];
            switch(c){
                case 'g': {ans+=6,p+=4; break;}
                case 'l': {ans+=(-3), p+=5;break;}
                case 'c': {ans+=(-6),p+=5; break;}
            }
        }
        else{
            int q = kw.find(c);
            ans+=pw[q];
            p+=a[q];
        }
    }
    if(s[n-2]=='2')ans*=2;
    else if(s[n-2]=='3')ans*=3;
    fo<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >>s;
    solve();
    return 0;
}
