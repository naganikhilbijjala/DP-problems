#include <bits/stdc++.h>
#define pb push_back
#define INF 1e5
using namespace std;
//ifstream f("data.in");
int main(){
    int n,m;
    vector<int> a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    cin >> m;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        b.pb(x);
    }
    sort(b.begin(),b.end());
    int j = 0,Count=0,l=0;
    int min = (n<m)?n:m;
    for(int i=0; i<INF; i++){
        if(l==n||j==m)
            break;
        int k = a[l]-b[j];
        if(k==0||k==1||k==-1){
            l++;
            j++;
            Count++;
            continue;
        }
        if(k>1){
            j++;
            continue;
        }
        if(k<1){
            l++;
            continue;
        }

    }
    cout << Count;
}
