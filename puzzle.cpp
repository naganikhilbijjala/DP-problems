#include <bits/stdc++.h>
using namespace std;
int n,m,a[60],mi=1e9;
int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++)
        cin >> a[i];
    sort(a,a+m);
    for(int i=0;i<m-n+1;i++)
    mi=min(mi,a[i+n-1]-a[i]);
    cout << mi;
}

