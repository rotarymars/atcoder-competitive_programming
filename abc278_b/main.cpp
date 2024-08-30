#include<iostream>
using namespace std;
int main(){
	int h,m;
	cin >>h>>m;
	while(true){
		if((h/10)*10+m/10<=23 && (h%10)*10+m%10<=59){
			cout <<h<<" "<<m;
			cout<<endl;
			return 0;
		}
		m++;
		if(m==60) h++,m=0;
		if(h==24) h=0;
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
