#include <bits/stdc++.h>
#define ll long long
#define NAME "SUM"
using namespace std;
ifstream fi (NAME".inp");
ofstream fo (NAME".out");

int main()
{
   int a,b;
   ll res=0;
   fi >> a >> b;
   for(int i=a;i<=b;++i){
      string s = to_string(i);
      sort(s.begin(),s.end());
      res+=stoi(s);
   }
   fo<<res;
}
