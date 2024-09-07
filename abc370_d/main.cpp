#include <iostream>
#include <utility>
#include <vector>
#include <numeric>
using namespace std;
pair<bool,vector<int>::iterator> doesexist(vector<int>&v,int i){
	vector<int>::iterator it=lower_bound(v.begin(),v.end(),i);
	return make_pair(*it==i,it);
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int h,w,q;
	cin>>h>>w>>q;
	vector<vector<int>>horizontalelement(h,vector<int>(w,-1)),verticalelement(w,vector<int>(h,-1));
	for(int i=0;i<h;i++)iota(horizontalelement[i].begin(),horizontalelement[i].end(),0);
	for(int i=0;i<w;i++)iota(verticalelement[i].begin(),verticalelement[i].end(),0);
	int blockleft=h*w;
	for(;q;q--){
		int r,c;
		cin>>r>>c;
		--r,--c;
		auto tmpit=doesexist(horizontalelement[r],c),tempit=doesexist(verticalelement[c],r);
		if(tmpit.first)horizontalelement[r].erase(tmpit.second),verticalelement[c].erase(tempit.second);
		else{
			auto&horiz=horizontalelement[r],&vert=verticalelement[c];
			if(*lower_bound(horiz.begin(),horiz.end(),c)<c)horiz.erase(lower_bound(horiz.begin(),horiz.end(),c)),--blockleft;
			if(upper_bound(horiz.begin(),horiz.end(),c)!=horiz.end())horiz.erase(upper_bound(horiz.begin(),horiz.end(),c)),--blockleft;
			if(*lower_bound(vert.begin(),vert.end(),r)<r)vert.erase(lower_bound(vert.begin(),vert.end(),r)),--blockleft;
			if(upper_bound(vert.begin(),vert.end(),r)!=vert.end())vert.erase(upper_bound(vert.begin(),vert.end(),r)),--blockleft;
		}
#ifdef _DEBUG
		cout<<"HORIZONTAL ELEMENT"<<endl;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++)cout<<horizontalelement[i][j]<<' ';
			cout<<endl;
		}
		cout<<"VERTICAL ELEMENT"<<endl;
		for(int i=0;i<w;i++){
			for(int j=0;j<h;j++)cout<<verticalelement[i][j]<<' ';
			cout<<endl;
		}
#endif
	}
	cout<<blockleft<<endl;
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
