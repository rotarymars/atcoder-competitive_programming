#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
signed main(){
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
  string s;
  int k;
  cin>>s>>k;
  sort(s.begin(),s.end());
  for(int i=0;i<k-1;i++){
    next_permutation(s.begin(),s.end());
  }
  cout<<s<<endl;
	return 0;
}

