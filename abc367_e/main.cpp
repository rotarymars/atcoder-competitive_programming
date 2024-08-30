#include <iostream>
#include <template/debugprint.hpp>
#include <set>
#include <vector>
using namespace std;
using ll=long long;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	ll n,k;
	cin>>n>>k;
	vector<ll>x(n),a(x);
	for(ll&i:x)cin>>i,i--;
	for(ll&i:a)cin>>i;
	set<vector<ll>>se;
	vector<vector<ll>>history;
	while(true){
		vector<ll>b(n);
		for(int i=0;i<n;i++){
			b[i]=a[x[i]];
		}
		if(!se.contains(b)){
			se.insert(b);
			history.push_back(b);
			a=b;
		}
		else{
			if(b==history.back()){
				for(int i=0;i<n;i++){
					if(i==0)[[unlikely]]cout<<b[i];
					else cout<<' '<<b[i];
				}
				cout<<endl;
				return 0;
			}
			else break;
		}
	}
#ifdef _DEBUG
	for(auto&i:history){
		for(auto&j:i)cout<<j<<' ';
		cout<<endl;
	}
#endif
	--k;
	DP(k%history.size());
	vector<ll>ans=history[k%history.size()];
	for(int i=0;i<n;i++){
		if(i==0)[[unlikely]]cout<<ans[i];
		else cout<<' '<<ans[i];
	}
	cout<<endl;
	return 0;
}


/*
                          ./+o+-       
                  yyyyy- -yyyyyy+      
               ://+//////-yyyyyyo      
           .++ .:/++++++/-.+sss/`      
         .:++o:  /++++++++/:--:/-      
        o:+o+:++.`..```.-/oo+++++/     
       .:+o:+o/.          `+sssoo+/    
  .++/+:+oo+o:`             /sssooo.   
 /+++//+:`oo+o               /::--:.   
 \+/+o+++`o++o               ++////.   
  .++.o+++oo+:`             /dddhhh.   
       .+.o+oo:.          `oddhhhh+    
        \+.++o+o``-````.:ohdhhhhh+     
         `:o+++ `ohhhhhhhhyo++os:
           .o:`.syhhhhhhh/.oo++o`
               /osyyyyyyo++ooo+++/
                   ````` +oo+++o\:
                          `oo++.
*/
