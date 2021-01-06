#include<bits/stdc++.h>
#define NAME "MICROBUS"
using namespace std;
ifstream fi (NAME".inp");
ofstream fo (NAME".inp");
int main()
{
   ios::sync_with_stdio(0);
   fi.tie(0);
   fo.tie(0);
   int n,m,q,p;
   fi >> n >> m >> p >> q;
   int dp[n+1][m+1]={0};
   int a[n],b[m];
   for(auto &i:a) fi >> i;
   for(auto &i:b) fi >> i;
   sort(a,a+n);
   sort(b,b+m);
   for(int i=0;i<n;++i)dp[i][0]=p*i;
   for(int j=0;j<m;++j)dp[0][j]=q*j;
   for(int i=1;i<=n;++i){
      for(int j=1;j<=m;++j){
         int x = dp[i-1][j-1]+abs(a[i-1]-b[i-1]);
         int y = dp[i-1][j]+p;
         int z = dp[i][j-1]+q;
         dp[i][j]=min(x,min(y,z));
      }
   }
   fo<<dp[n][m];
   return 0;
}
