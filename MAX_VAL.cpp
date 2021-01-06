#include <bits/stdc++.h>
#define NAME "MAX_VAL"
using namespace std;
// Trịnh Xuân Đạt
ifstream fi (NAME".inp");
ofstream fo (NAME".out");
string s;
vector<string> a;
int64_t c=0;
int64_t Search_T(string k){
    int64_t ans=0;
    vector<int> v;
    vector<char> op;
    string tmp="";
    op.push_back('+');
    for(int i=0;i<k.size();++i){
        if(k[i]=='+' || k[i]=='-')
        {
            op.push_back(k[i]);
            v.push_back(stoi(tmp));
            tmp="";
            continue;
        }
        tmp+=k[i];
    }
    v.push_back(stoi(tmp));
    for(int i=0;i<op.size();++i)
    {
        if(op[i]=='+')ans+=v[i];
        else ans-=v[i];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    fi.tie(0);
    fo.tie(0);
    fi >> s;
    for(int i=0;i<s.size();++i)
    {
        string tmp = s;
        tmp.erase(i,1);
        a.push_back(tmp);
    }
    c = Search_T(a[0]);
    for(int i=1;i<a.size();++i)
        c=max(c,Search_T(a[i]));
    fo<<c;
    return 0;
}

