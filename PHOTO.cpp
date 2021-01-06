#include <bits/stdc++.h>
#define NAME "PHOTO"
using namespace std;

ifstream fi (NAME".inp");
ofstream fo (NAME".out");

main(){
    int n;
    fi >> n;
    vector<int> a(n),x(n),y(n);
    for(int i=0;i<n;++i) fi >> a[i];
    sort(a.begin(),a.end());
    x[0] = 0; y[0]=1;
    for(int i=1;i<n;++i){
        if(i>1 && a[i]-a[i-2]<=10 && x[i-1]<2){
            x[i] = x[i-1]+1;
            y[i] = y[i-1];
            continue;
        }
        if(a[i]-a[i-1]<=20 && x[i-1]==0){
            x[i] = 1;
            y[i] = y[i-1];
            continue;
        }
        x[i]=0;
        y[i]=y[i-1]+1;
    }
    fo << y[n-1];
    return 0;
}
