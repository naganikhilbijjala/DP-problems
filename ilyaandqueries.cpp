#include <bits/stdc++.h>
using namespace std;
const int MAXN = 101000;
int f[MAXN];
int main(){
    char str[10000];
    scanf("%s",str+1);
    int n,m;
    n = strlen(str+1);
    for(int i=1; i<n; i++){
        f[i]=f[i-1]+(str[i]==str[i+1]);
    }
    cin >> m;
    for(int i=1; i<=m; i++){
            int x,y;
            cin >> x >> y;
            cout << f[y-1]-f[x-1] << endl;
    }
}
