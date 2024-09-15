#include <iostream>
#include <limits.h>
#include <numeric>
#include <algorithm>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<vector<int>>v(n);
	for(int i=0;i<n;i++){
		int c;
		cin>>c;
		for(int j=0;j<c;j++){
			int tmp;
			cin>>tmp;
			v[i].push_back(tmp);
		}
	}
	int x;
	cin>>x;
	vector<vector<int>>anslist;
	vector<int>indexlist;
	for(int i=0;i<n;i++){
		if(count(v[i].begin(),v[i].end(),x))anslist.push_back(v[i]),indexlist.push_back(i+1);
	}
	int minans=INT_MAX,ans=0;
	for(int i=0;i<anslist.size();i++)minans=min(minans,(int)anslist[i].size());
	for(int i=0;i<anslist.size();i++)if(anslist[i].size()==minans)++ans;
	cout<<ans<<'\n';
	bool firstprint=1;
	for(int i=0;i<anslist.size();i++){
		if(anslist[i].size()==minans){
			if(firstprint){
				firstprint=false;
				goto label;
			}
			cout<<' ';
label:
			cout<<indexlist[i];
		}
	}
	cout<<endl;
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
