#include <iostream>
#include <set>
using namespace std;
signed main(){
	// cin.tie(nullptr);
	// ios_base::sync_with_stdio(false);
	int ans=0;
	for(int i=0;i<12;i++){
		char tmp;
		set<char>se;
		while((tmp=getchar())!='\n')se.insert(tmp);
		if(se.contains('r'))++ans;
	}
	cout<<ans<<endl;
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
