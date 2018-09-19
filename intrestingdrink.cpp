#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int q;
    cin >> q;
    while(q--){
        int m;
        cin >> m;
        int id = upper_bound(v.begin(),v.end(),m)-v.begin();
        cout << id << endl;
    }
}
