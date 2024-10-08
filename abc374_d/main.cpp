#include <iostream>
#include <iomanip>
#include <utility>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
using namespace std;
long double calc_distance(pair<long double,long double>a,pair<long double,long double>b){
	return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second));
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	long double s,t;
	int n;
	cin>>n>>s>>t;
	vector<pair<pair<long double,long double>,pair<long double,long double>>>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first.first>>v[i].first.second>>v[i].second.first>>v[i].second.second;
	}
	long double ans=1e9;
	auto vcop=v;
	for(int i=0;i<(1<<n);i++){
		v=vcop;
		sort(v.begin(),v.end());
		for(int j=0;j<n;j++){
			if(i&(1<<j))swap(v[j].first,v[j].second);
		}
		sort(v.begin(),v.end());
		do{
			long double time=0;
			pair<long double,long double>now{0,0};
			for(int i=0;i<n;i++){
				time+=(calc_distance(now,v[i].first)/s);
				now=v[i].first;
				time+=(calc_distance(now,v[i].second)/t);
				now=v[i].second;
			}
			ans=min(ans,time);
		}while(next_permutation(v.begin(),v.end()));
	}
	cout<<fixed<<setprecision(10)<<ans<<endl;
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
