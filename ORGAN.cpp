#include <bits/stdc++.h>
#define NAME "ORGAN"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

const int m = 1e9+7;
int64_t p[51] = {0}, ans=0;
int n,k;
int a[1000001];

int main()
{
   fi >> n >> k;
   for(int i=1;i<=n;++i) fi >> a[i];
   sort(a+1,a+n+1);
   p[1]=1;
   for(int i=1; i<=n; ++i){
      for(int j=min(i,k); j>=2; --j)p[j] = (p[j]+p[j-1])%m;
      ans = (ans+p[k]*a[i])%m;
   }
   fo << ans;
   return 0;
}
