#include<bits/stdc++.h>
#define ll long long
#define int long long 
#define vi vector<int>
#define lowbit(x) x&-x
#define pb(x) push_back(x)
#define pii pair<int,int>
using namespace std;
const int N=2e5+10;
ll ans;
int n,m,T,a[N];
inline int read(){
	int s=0,f=0;
	char ch=getchar();
	while(ch<'0'||ch>'9') f|=(ch=='-'),ch=getchar();
	while(ch<='9'&&ch>='0') s=(s<<1)+(s<<3)+(ch^48),ch=getchar();
	return f?-s:s;
}
inline int check(int mid){
	int s=0,res=0;
	for(register int i=n;i>=1;--i){
		int tmp=min(m-s,max(0ll,(mid-res-(s-1)*i-a[i])/i));
		s+=tmp,res+=s;
	}
	return res>=mid;
}
signed main(){
	T=read();
	while(T--){
		n=read(),m=read();
		for(register int i=1;i<=n;++i) a[i]=read();
		if(a[1]!=1){
			cout<<"1\n";
			continue;
		}
		int l=1,r=1e18;
		while(l<r){
			int mid=(l+r)>>1;
			if(check(mid)) l=mid+1;
			else r=mid;
		}
		cout<<l<<"\n";
	}
	return 0;
}