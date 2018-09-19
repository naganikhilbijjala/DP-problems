#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
typedef long long int64;
const int maxn = 1e5+16;
int main(){
    int n;
    int a[maxn];
    int64 f[maxn];
    scanf("%d",&n);
	memset(a,0,sizeof(a));
	for (int i=0;i<n;i++)
	{
		int p;
		scanf("%d",&p);
		a[p]++;
	}
	f[0]=0;
	f[1]=a[1];
	for (int i=2;i<maxn;i++) f[i]=max(f[i-1],f[i-2]+(int64)a[i]*i);
	cout<<f[maxn-1]<<endl;
	return 0;

}
