#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,len=0,last=0,ans=0;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        a.push_back(c);
    }
    for(int i=0;i<n;i++){
        if(last<=a[i]){
            len++;
            last=a[i];
        }else{
            len=1;
            last=a[i];
        }
        ans=max(ans,len);
    }
    cout << ans;
}
