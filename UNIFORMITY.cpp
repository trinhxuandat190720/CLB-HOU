#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 1e5+5;
int n,q;
int b[MAX_N];
int cnt[MAX_N];
int fr[2*MAX_N];
int cur_ez = 0;
map<int,int> ids;

int get_id(int x){
   if(ids.find(x)==ids.end()) ids[x] = cur_ez++;
   return ids[x];
}

int get(int l, int r){
   for(int i=l;i<r;++i){
      --cnt[fr[b[i]]];
      ++cnt[++fr[b[i]]];
   }
   int ans=0;
   for(int i=1; !ans ; ++i) if(!cnt[i]) ans=i;
   for(int i=l; i<r;++i){
      --cnt[fr[b[i]]];
      ++cnt[--fr[b[i]]];
   }
   return ans;
}

int main()
{
   ifstream cin ("UNIFORMITY.inp");
   ofstream cout ("UNIFORMITY.out");
   cin >> n >> q;
   for(int i=0;i<n;++i){
      cin >> b[i];
      b[i] = get_id(b[i]);
   }
   int t,l,r;
   while(q--){
      cin >> t >> l >> r;
      --l;
      if(t==1) cout<<get(l,r)<<'\n';
      else b[l] = get_id(r);
   }
   return 0;
}
