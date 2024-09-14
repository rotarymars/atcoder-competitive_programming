#include <iostream>
#include <template/debugprint.hpp>
#include <utility>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	int mg;
	cin>>mg;
	vector<pair<int,int>>g(mg);
	for(int i=0;i<mg;i++){
		cin>>g[i].first>>g[i].second;
		if(g[i].first>g[i].second)swap(g[i].first,g[i].second);
	}
	int mh;
	cin>>mh;
	vector<pair<int,int>>h(mh);
	for(int i=0;i<mh;i++){
		cin>>h[i].first>>h[i].second;
		if(h[i].first>h[i].second)swap(h[i].first,h[i].second);
	}
	vector<vector<int>>v(n-1);
	for(int i=0;i<n-1;i++){
		for(int j=n-1-i;j>=0;--j){
			int tmp;
			cin>>tmp;
			v[i].emplace_back(tmp);
		}
	}
	DP("input done");
	int ans1=0,ans2=0;
	sort(g.begin(),g.end());
	sort(h.begin(),h.end());
	for(int i=0;i<mg;i++){
		auto it=lower_bound(h.begin(),h.end(),g[i]);
		if(it==h.end()){
			ans1+=v[g[i].first-1][g[i].second-1];
			h.push_back(g[i]);
			sort(h.begin(),h.end());
			DP(g[i].first);DP(g[i].second);
			DP(v[g[i].first-1][g[i].second-1]);
			continue;
		}
		if(*it!=g[i]){
			ans1+=v[g[i].first-1][g[i].second-1];
			DP(h[i].first);DP(h[i].second);
			DP(v[h[i].first-1][h[i].second-1]);
		}
	}
	for(int i=0;i<mh;i++){
		auto it=lower_bound(g.begin(),g.end(),h[i]);
		if(it==g.end()){
			ans2+=v[h[i].first-1][h[i].second-1];
			DP(h[i].first);DP(h[i].second);
			DP(v[h[i].first-1][h[i].second-1]);
			continue;
		}
		if(*it!=h[i]){
			ans2+=v[h[i].first-1][h[i].second-1];
			DP(h[i].first);DP(h[i].second);
			DP(v[h[i].first-1][h[i].second-1]);
		}
	}
	cout<<ans1+ans2<<endl;
	return 0;
}


/*

                   N~                   
   MMMMMMMMMMMMMMM+O$M MMMMMMMMMMMMMMM+ 
  :M~~~~~~~~~~~~OMOOON$M,~~~~~~~~~~~~IM 
  :M$77~~~~~~~77IMOOOOOM7I7~~~~~~~~~I8M 
     M7~~~~~~~IMOOOOOOOOM8 ~~~~~~~:IM   
     M7~~~~~~~IMOOOOOO8M +~~~~~~~IMM    
     M7~~~~~~~IMOOOOOM. ~~~~~~~DIM      
     M7~~~~~~~IMOOOMM :~~~~~~~IMM       
     M7~~~~~~~IMOOM :~~~~~~~NIM$N       
    MM7~~~~~~~IMMO ~~~~~~~~IMMOOO$M     
   7+M7~~~~~~~IM O~~~~~~~ONMOOOOOOZ$.   
 M+OOM7~~~~~~~I ~~~~~~~:IMOOOOOOOOOO$M  
 M8OOM7~~~~~~~?~~~~~~~7MMOOOOOOOOOOODM  
  88NM7~~~~~~~~~~~~~MMMOOOOOOOOOOOOD+   
    MM7~~~~~~~~~~~~M~~MOOOOOOOOOODM     
     M7~~~~~~~~~~=IMOOOOOOOOOOONN       
     M7~~~~~~~~~I?~~~MM~~~MD+~~M8~~~$   
     M7~~~~~~~IZMD~~ZOO:~~~~~~~~~~~~.   
     M7~~~~~~IMDO8~~NOM~~NDM~~M ~~~M    
     M7~~~~ZNMOOM~~8OO:~?DM8~~  M~~?    
     M7~~~IM.:ND:~~MOM~~M M~~M N~~O~    
     MMMMMM    MMMMMODNM+ ?III +III     
                 M8ODM                  
                  M8O                   
                                        
*/
