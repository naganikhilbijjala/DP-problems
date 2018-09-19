#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,s,l,r;
    cin >> m >>s;
    vector<int> res1(m,0),res2(m,0);
    if(s==0||s>m*9){
        if(s==0&&m==1)
            cout << "0" << " " << "0";
            else
            cout << "-1" << " " << "-1";
        return 0;
    }
    l=0,r=m-1;
    res1[0]=res2[0]=1;
    for(int i=1; i<s; i++){
        if(res1[l]==9) l++;
        res1[l]++;
        if(res2[r]==9) r--;
        res2[r]++;
    }
    for(int i=0;i<m; i++)
        cout << res2[i] ;
        cout << " ";
    for(int i=0;i<m; i++)
        cout << res1[i];

}
