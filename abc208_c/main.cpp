#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	long long k;
	cin>>n>>k;
	vector<int>v(n);
	for(int&i:v)cin>>i;
	vector<int>order(n);
	iota(order.begin(),order.end(),0);
	sort(order.begin(),order.end(),[&](int i,int j){return v[i]<v[j];});
	vector<long long>ans(n,k/n);
	for(int i=0;i<k%n;i++)++ans[order[i]];
	for(int i=0;i<n;i++)cout<<ans[i]<<'\n';
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
