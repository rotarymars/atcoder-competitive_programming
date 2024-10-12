#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
long double calc_dist(long double a, long double b, long double c, long double d){
	
	return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	long double ans=0;
	long double befa,befb;
	befa=befb=0;
	for(;n;n--){
		long double a,b;
		cin>>a>>b;
		ans+=calc_dist(a,b,befa,befb);
		befa=a;
		befb=b;
	}
	ans+=calc_dist(0,0,befa,befb);
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
