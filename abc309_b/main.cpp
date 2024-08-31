#include <iostream>
#include <vector>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	vector v(n,vector<int>(n));
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<n;j++){
			if(s[j]=='0')v[i][j]='0';
			else v[i][j]='1';
		}
	}
	vector ans(n,vector<char>(n));
	for(int i=0;i<n;i++)for(int j=0;j<n;j++){
		if(i==0||j==0||i==n-1||j==n-1){
			if(i==0&&j<n-1) ans[i][j+1]=v[i][j];
      if(i<n-1&&j==n-1) ans[i+1][j]=v[i][j];
      if(i==n-1&&j>0) ans[i][j-1]=v[i][j];
      if(i>0&&j==0) ans[i-1][j]=v[i][j];
		}
		else ans[i][j]=v[i][j];
	}
	for(auto&i:ans){
		for(char&j:i)cout<<j;
		cout<<endl;
	}
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
